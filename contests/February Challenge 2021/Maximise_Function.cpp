// problem link : https://www.codechef.com/FEB21C/problems/MAXFUN
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
void solve() {
  lli n, m, k, a, b, c, p, q;
  cin >> n;
  lli arr[n];
  range(0, n, 1, i)
  cin >> arr[i];
  lli maxi = 0;
  sort(arr, arr + n);
  a = arr[0];
  b = arr[1];
  c = arr[n - 1];
  cout << (abs(a - b) + abs(b - c) + abs(a - c));
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  lli t = 1;
  cin >> t;
  while (t--) {
    solve();
    pnl;
  }
  return  0;
}

/*
sample IO :

3
3
2 7 5
3
3 3 3
5
2 2 2 2 5



10
0
6



*/



