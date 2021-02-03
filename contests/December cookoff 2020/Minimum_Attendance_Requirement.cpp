// https://www.codechef.com/COOK125B/problems/ATTENDU
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
  lli n, m, k, a = 0, b, c, p = 0, q;
  cin >> n;
  string s;
  cin >> s;
  for (char ch : s) {
    if (ch == '1') {
      p++;
    } else {
      a++;
    }
  }
  lli rem = 120 - n;
  lli total = rem + p;
  lli persent = ((float) total / 120) * 100;
  if (persent >= 75.0)
    cout << "YES";
  else
    cout << "NO";

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

// 14minutes taken

/*

3
50
00000000000000000000000000000000000000000000000000
50
01010101010101010101010101010101010101010101010101
2
01



NO
YES
YES
*/













