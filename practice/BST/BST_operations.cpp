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
void solve(Node *root) {
  // Inorder(root);
  Preorder(root);
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













