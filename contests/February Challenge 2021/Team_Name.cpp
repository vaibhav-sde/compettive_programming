// problem link : https://www.codechef.com/FEB21C/problems/TEAMNAME
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
lli getDistinct(vector<char> a, vector<char> b) {
  set <char> xD;
  for (char ch : a)
    xD.insert(ch);
  for (char ch : b)
    xD.insert(ch);
  return xD.size();
}
void solve() {
  lli n, m, k, a, b, c, p, q;
  cin >> n;
  unordered_map<string, vector<char>> record;
  vector <string> rrx;
  while (n--) {
    string x;
    cin >> x;
    if (record.find(x.substr(1, x.size() - 1)) == record.end()) {
      record[x.substr(1, x.size() - 1)].push_back(x[0]);
      rrx.push_back(x.substr(1, x.size() - 1));
    } else {
      record[x.substr(1, x.size() - 1)].push_back(x[0]);
    }
  }
  lli T = 0;
  range(0, rrx.size() - 1, 1, i) {
    range(i + 1, rrx.size(), 1, j) {
      lli distance = getDistinct(record[rrx[i]], record[rrx[j]]);
      T += ((distance - record[rrx[i]].size()) * (distance - record[rrx[j]].size()));
    }
  }
  cout << 2 * T;
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
2
suf mas
3
good game guys
4
hell bell best test

ans:
2
0
2

1
4
dtp ctq rts etp
ans :
10
*/



