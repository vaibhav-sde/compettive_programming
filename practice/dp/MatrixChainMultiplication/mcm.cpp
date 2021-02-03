#include<bits/stdc++.h>
using namespace  std;
#define el endl;
#define pnl cout<<el;

/*
  Given String
  two indices i->j
  break k such that i--k--j
  now we have two problems  i to  k  and k+1 j
*/
int solve(int arr[], int i, int j ) {
  if (i > j)
    return 0;
  for (int k = i; k < j; k++) {
    //calculate temp answer
  }
  return 0;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int arr[] = {40, 20, 30, 10, 30};
  // solve();
  cout << "Hello worls";
  return  0;
}













