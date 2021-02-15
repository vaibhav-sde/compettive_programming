// problem link : https://www.codechef.com/COOK126C/problems/MINIL
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
  cin >> n >> m;
  bool should1 = true;  // *
  bool should2 = true; // .
  int globalcount1 = 0;
  int globalcount2 = 0;
  range(0, n, 1, i) {
    string row;
    cin >> row;
    if (i % 2 == 0) { /// = >
      for (char ch : row) {
        if (should1) {
          if (ch != '*') {
            globalcount1++;
          }
        }
        else {
          if (ch != '.') {
            globalcount1++;
          }
        }
        if (should2) {
          if (ch != '.') {
            globalcount2++;
          }
        }
        else {
          if (ch != '*') {
            globalcount2++;
          }
        }
        should2 = !should2;
        should1 = !should1;
      }
    } else { // <=
      for (int i = m - 1; i >= 0; i--) {
        char ch = row[i];
        if (should1) {
          if (ch != '*') {
            globalcount1++;
          }
        } else {
          if (ch != '.') {
            globalcount1++;
          }
        }
        if (should2) {
          if (ch != '.') {
            globalcount2++;
          }
        } else {
          if (ch != '*') {
            globalcount2++;
          }
        }
        should2 = !should2;
        should1 = !should1;
      }
    }
  }
  if (n * m % 2 == 0) {
    cout << min(globalcount1, globalcount2);
  } else {
    cout << globalcount1;
  }

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






*/



