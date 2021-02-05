// problem link : https://www.codechef.com/FEB21C/problems/FROGS
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
  lli W[n];
  lli L[n];
  unordered_map<lli, lli>position;
  range(0, n, 1, i) {
    lli x;
    cin >> x;
    W[i] = x;
    position[x] = i;
  }
  range(0, n, 1, i) {
    cin >> L[i];
  }
  if (n == 2) {
    if (position[1] < position[2]) {
      cout << 0;
    } else {
      if (L[position[2]] == 1) {
        cout << 2;
      }
      else
        cout << 1;
    }
  }
  else
  {
    if (n == 4)
    {
      int count = 0;
      lli a1 = position[1];// 1
      lli b2 = position[2];// 0
      lli c3 = position[3];// 3
      lli d4 = position[4];// 2
      while ( b2 <= a1) { // 1<0
        // cout << "g";
        b2 += L[position[2]];
        count++;
      }
      while ( c3 <= b2) { // 1<0
        // cout << "g";
        c3 += L[position[3]];
        count++;
      }
      while ( d4 <= c3) {
        d4 += L[position[4]];
        count++;
      }
      cout << count;
    } else { // n=3
      int count = 0;
      lli a1 = position[1];// 1
      lli b2 = position[2];// 0
      lli c3 = position[3];// 3
      while ( b2 <= a1) {
        b2 += L[position[2]];
        count++;
      }
      while ( c3 <= b2) {
        c3 += L[position[3]];
        count++;
      }
      cout << count;
    }

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

3
3
3 1 2
1 4 5
3
3 2 1
1 1 1
4
2 1 4 3
4 1 2 4


3
6
5





*/



