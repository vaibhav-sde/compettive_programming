//https://www.codechef.com/LTIME92C/problems/INTRVS
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
  bool tookMore = false, isBot = true;
  cin >> n >> k;
  p = 0;
  range(0, n, 1, i) {
    lli current;
    cin >> current;
    if (current > k)
      tookMore = true;
    if (!(current == 1 || current == 0)) {
      isBot = false;
    }
    if (current != -1 )
      p++;
  }
  // cout << (float)n / 2 << " " << ceil((float)n / 2) << el;
  // return;
  if ((p < ceil((float)n / 2))) {
    cout << "Rejected";
    return;
  }
  if (tookMore) {
    cout << "Too Slow";
    return;
  }
  if (isBot == true) {
    cout << "Bot";
    return;
  }
  cout << "Accepted";
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
7 30
-1 0 4 -1 -1 40 -1
6 30
1 0 1 1 1 0
6 44
1 1 1 1 -1 0
7 31
2 3 42 -1 -1 -1 4
6 60
1 -1 0 60 -1 -1
*/













