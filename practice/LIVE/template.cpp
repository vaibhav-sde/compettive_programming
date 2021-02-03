//https://www.codechef.com/LTIME92C/problems/SUMPOS
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
  string s;
  cin >> s;

  char curr = 'N';
  lli cnt = 0;
  for (char c : s) {
    // cout << curr;
    if (c == '0') {
      cnt++;

    } else {
      cnt--;

    }

  }
  // cout << curr;
  cnt %= 4;
  if (cnt < 0) cnt += 4;

  if (!cnt) cout << "E";
  else if (cnt == 1) cout << "S";
  else if (cnt == 2) cout << "W";
  else cout << "N";
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
4
1010
5
00000
3
111


*/







