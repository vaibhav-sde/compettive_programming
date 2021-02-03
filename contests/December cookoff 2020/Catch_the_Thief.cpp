//https://www.codechef.com/COOK125B/problems/CATHIEF
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
  lli n, m, k, a, b, c, p, q, x, y;
  cin >> x >> y >> k >> n;
  if (abs(x - y) % (2 * k) == 0)
    cout << "Yes";
  else
    cout << "No";

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

5
0 1 1 1
1 4 1 5
4 2 1 7
3 7 2 10
8 2 3 15


No
No
Yes
Yes
Yes

24min with 12min editorial
*/