#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;

class  Node
{
public:
  int data;
  Node *left;
  Node *right;
};
Node* createNode(int k) {
  Node *newnode = new Node();
  newnode->left = NULL;
  newnode->right = NULL;
  newnode->data = k;
  return newnode;
}
Node* insert(Node *root, int k) {
  if (root == NULL) {
    return createNode(k);
  }
  if (k < root->data) {
    root->left   = insert(root->left, k);
  }
  else if (k > root->data) {
    root->right = insert(root->right, k);
  }
  return root;
}
void printDiagonal(Node *root){
  string ans;
  queue<Node*> Q;
  Q.push(root);
  while(!Q.empty()){
    int size = Q.size();
    while(size--){
      Node* currentNode = Q.front();
      while(currentNode != NULL){
        ans += to_string(currentNode->data)+" ";
        if(currentNode->left != NULL){
          Q.push(currentNode->left);
        }
        currentNode = currentNode->right;
      }
      Q.pop();
    }

  }
  cout<<ans;
}
vector<int> p1;

bool rootToNodePath(Node *root,int key){
    if(root == NULL)
      return false;
    if(root->data == key){
      p1.insert(p1.begin(),root->data);
      return true;
    }
    bool left = rootToNodePath(root->left,key);
    bool right = rootToNodePath(root->right,key);
    if(left || right){
      p1.insert(p1.begin(),root->data);
      return true;
    }
    return false;
  }
void LCA(Node *root){
  int memberOne = 9;
  int memberTwo = 37;
  rootToNodePath(root,memberTwo);
  vector<int> path1 = p1;
  p1={};
  rootToNodePath(root,memberOne);
  vector<int> path2 = p1;
  for(int i = 1 ;i<min(path1.size(),path2.size());i++){
    // cout<<path1[i]<<" ";
    if(path1[i] != path2[i]){
      cout<<endl<<"Answer: "<< path1[i-1];
      break;
    }
  }

}
void solve(Node *root) {
  // printDiagonal(root);
  LCA(root);
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  lli t = 1;
  // cin >> t;
  Node *root = NULL;
  vector<int> nums = {8, 23, 6, 4, 7, -1, -2, 101, 88, 69, 45, 37, 21, 9, 12, 68, 92, 99, 100};
  for (int x : nums)
    root = insert(root, x);
  while (t--) {
    solve(root);
    pnl;
  }
  return  0;
}













