#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
vector<int> vec;
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
Node* insertLevelOrder(int arr[], Node* root, int i, int n)
{
  if (i < n)
  {
    Node* temp = createNode(arr[i]);
    root = temp;
    root->left = insertLevelOrder(arr, root->left, 2 * i + 1, n);
    root->right = insertLevelOrder(arr, root->right, 2 * i + 2, n);
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
void findHeight(Node *root, long height) {
  if (root == NULL || root->data == -1)
    return;
  vec[height]++;
  findHeight(root->left, height + 1);
  findHeight(root->right, height + 1);
}
void solve() {
  lli n;
  cin >> n;
  int arr[(2 * n) + 1];
  arr[0] = 1;
  Node *root = createNode(1);
  range(1, 2 * n, 1, i) {
    cin >> arr[i];
  }
  root = insertLevelOrder(arr, root, 0, (2 * n) + 1 );
  vec.resize(n, 0);
  // Inorder(root);
  findHeight(root, 0);
  range(0, n  , 1, i)
  cout << vec[i] << " ";

}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  lli t = 1;
  // cin >> t;
  while (t--) {
    solve();
    pnl;
  }
  return  0;
}













