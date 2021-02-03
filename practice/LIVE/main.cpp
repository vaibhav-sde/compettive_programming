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
lli findValue(lli arr[], lli n)
{
  lli firstpossible[n], secondpossible[n], tmp;
  for (lli i = 0; i < n; i++) {
    firstpossible[i] = (arr[i] + i);
    secondpossible[i] = (arr[i] - i);
  }
  lli x = firstpossible[0], y = firstpossible[0];
  for (lli i = 0; i < n; i++) {
    if (firstpossible[i] > x)
      x = firstpossible[i];
    if (firstpossible[i] < y)
      y = firstpossible[i];
  }
  lli temp = (x - y);
  x = secondpossible[0];
  y = secondpossible[0];
  for (lli i = 0; i < n; i++) {
    if (secondpossible[i] > x)
      x = secondpossible[i];
    if (secondpossible[i] < y)
      y = secondpossible[i];
  }
  return max(temp, (x - y));
}
void solve() {
  lli n, m, k, b, c = 0, p, q, t;
  cin >> n;
  lli arr[n];
  range(0, n, 1, i)
  cin >> arr[i];
  cout << findValue(arr, n);

}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  lli t = 1;
  // cin >> t;
  while (t--) {
    solve();
    pnl;
  }
  return  0;
}

