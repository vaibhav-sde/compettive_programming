#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;

struct  Node
{
  int data;
  struct Node*left;
  struct  Node *right;
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
vector<Node*> path;
bool  rootToNodePath(Node * root, int key){
  if(root == NULL)
    return false;
  if(root->data == key){
    path.push_back(root);
    return true;
  }
  bool foundOnleft = rootToNodePath(root->left, key);
  bool foundOnRight = rootToNodePath(root->right, key);
  if(foundOnleft || foundOnRight){
    path.push_back(root);
  } 
  return foundOnleft || foundOnRight;
}
void printKLevelsDown(Node *root, int height, Node *blocker){
  if(root == NULL || root == blocker)
    return;
  if(height == 0)
    cout<<root->data<<" ";
  printKLevelsDown(root->left, height-1,blocker);
  printKLevelsDown(root->right, height-1,blocker);
}
void printKDistanceNodes(Node *root){
  int k =4;
  rootToNodePath(root, 101);
  for(int i = path.size()-1;i >= 0 ; i--){
    printKLevelsDown(path[i],k-i, i==0 ? NULL : path[i-1] );
  }
}
void solve(Node *root) {
  // 1. root to node path
  // rootToNodePath(root, 21);
  // for(int x : path)
  //   cout<<x<<"->";
  // 2. k level down
  // printKLevelsDown(root,2);

  //3. print k distance nodes
  printKDistanceNodes(root);
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













