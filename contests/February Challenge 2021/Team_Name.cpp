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
void solve() {
  lli n, m, k, a, b, c, p, q;
  cin >> n;
  unordered_map<char, int>record;
  while (n--) {
    string word;
    cin >> word;
    if (record.find(word[0]) == record.end()) {
      record[word[0]] = 1;
    } else {
      record[word[0]]++;
    }
  }
  for (auto p : record) {
    cout << p.first << " " << p.second << endl;
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
2
suf mas
3
good game guys
4
hell bell best test




*/



