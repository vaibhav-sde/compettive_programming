// problem link: https://www.codechef.com/COOK125B/problems/SDSTRING
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
  string s;
  cin >> s;
  if (s.size() % 2 != 0) {
    cout << -1;
    return;
  }
  lli z = 0, o = 0;
  for (char ch : s) {
    if (ch == '1')
      o++;
    else
      z++;
  }
  if (o == 0 || z == 0) {
    cout << -1;
    return ;
  }
  cout << abs(o - z) / 2;
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

3
001101
1101
10111011




0
1
2

*/











