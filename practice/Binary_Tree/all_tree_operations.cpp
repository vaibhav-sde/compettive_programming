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
void Inorder(Node *root) {
  if (root == NULL)
    return;
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}
void Preorder(Node *root) {
  if (root == NULL)
    return;
  cout << root->data << " ";
  Preorder(root->left);
  Preorder(root->right);

}
void PostOrder(Node *root) {
  if (root == NULL )
    return;
  PostOrder(root->left);
  PostOrder(root->right);
  cout << root->data << " ";
}
int findHeight(Node *root) {
  if (root == NULL )
    return 0;
  return (max(1 + findHeight(root->left), 1 + findHeight(root->right)));
}
int global = 0;
void leftView(Node *root, int currentLevel) {
  if (root == NULL)
    return;
  if (currentLevel == global) {
    cout << root->data << " ";
    global++;
  }
  leftView(root->left, currentLevel + 1);
  leftView(root->right, currentLevel + 1);
}
void rightView(Node *root, int currentLevel) {
  if (root == NULL)
    return;
  if (currentLevel == global) {
    cout << root->data << " ";
    global++;
  }
  rightView(root->right, currentLevel + 1);
  rightView(root->left, currentLevel + 1);
}

map<int,int> record;

void BottomView(Node *node, int hori){
  if(node == NULL)
    return;
  cout<<node->data<<" "<<hori<<"\n";
  record[hori] = node ->data;
  BottomView(node->left,hori-1);
  BottomView(node->right,hori+1);

}
map<int,int> record2;

void TopView(Node *node, int hori)
{
  if(node == NULL)
    return;
  if(record2.find(hori) == record2.end())
  {
    // cout<<node->data<<" "<<hori<<"\n";
    record2[hori] = node ->data;
  }
  TopView(node->left,hori-1);
  TopView(node->right,hori+1);

}

void solve(Node *root) {
  // cout << "Inorder TRaversal of tree is : "; Inorder(root);
  // cout << endl << "Preorder TRaversal of tree is : "; Preorder(root);
  // cout << endl << "PostOrder TRaversal of tree is : "; PostOrder(root);
  // cout << endl << "Height of tree is : " << findHeight(root);
  // cout << endl << "Left view of tree is : "; leftView(root, 0);
  // cout << endl << "Right view of tree is : "; rightView(root, 0);
  // cout<<"***BOTTOM VIEW*** \n";BottomView(root,0);
  // for(auto gg : record){
  //   cout<<gg.second<<" ";
  // }
  cout<<"***TOP VIEW*** \n";
  TopView(root,0);
  for(auto gg : record2){
    cout<<gg.second<<" ";
  }
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













