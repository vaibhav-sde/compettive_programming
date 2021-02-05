// problem link : https://www.codechef.com/FEB21C/problems/MEET
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
lli GT(string time, string ampm) {
  int startHour = stoi(time.substr(0, 2));
  int startMinute = stoi(time.substr(3, 5));
  int final = 0;

  if (startHour == 12) {
    final += 0;
  } else {
    final += (startHour * 100);
  }
  final = final + (startMinute);

  if (ampm == "PM") {
    final = final + 1200;
  }
  return final;
  return 00;
}
void solve() {
  lli n, m, k, a, b, c, p, q;
  string meet, ampm;
  cin >> meet >> ampm;
  lli mtime = GT(meet, ampm);
  cin >> k;
  while (k--) {
    string start, ap1, end, ap2;
    cin >> start >> ap1 >> end >> ap2;
    lli av = GT(start, ap1);
    lli cv = GT(end, ap2);
    if (mtime >= av && mtime <= cv)
      cout << 1;
    else
      cout << 0;
    // cout << av << " " << mtime << " " << cv << endl;
    // cout << start << ap1 << end << ap2 << endl;
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

2
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM


1100
11101


*/



