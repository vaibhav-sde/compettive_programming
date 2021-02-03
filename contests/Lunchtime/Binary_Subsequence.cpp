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
  lli n, m, k, a, b, c, p, q, o = 0, z = 0;
  cin >> n;
  bool isOK = true;
  string s; cin >> s;
  char prev = 0;
  for (char ch : s) {
    if (prev == 0) {
      if (ch == '0' || ch == 1) {
      }
    } else {
      if (ch == '0') {
        isOK = false;
      }
    }
    if (ch == '0') {
      z++;
    } else {
      prev = 1;
      o++;
    }
  }
  if (isOK) {
    cout << 0;
    return;
  }
  lli minimum = (min(n - z, n - o));
  lli zsofar = 0, osofar = 0;
  for (char ch : s) {
    if (ch == '0') {
      zsofar++;
    } else {
      osofar++;
    }
    lli totalops = osofar + (z - zsofar);
    minimum = min(minimum, totalops);
  }
  cout << minimum;
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
6
2
0
3
110
5
10101
5
10011
6
111000
19
1101000010110111010




o/p

0
1
2
1
3
7
*/










