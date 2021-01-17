#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
#define pb push_back
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
typedef vector<int> vi;
// vector<vector<lli>> DP;
lli DP[1001][1001];
lli knapsack(lli weights[], lli values[], lli W, lli n) {
  if (W == 0, n == 0)
    return 0;
  if (DP[n][W] != -1) {
    return DP[n][W];
  }
  if (weights[n - 1] <= W) { // bagsize is greater
    lli temp =  (max(values[n - 1] + knapsack(weights, values, W - weights[n - 1], n - 1), knapsack(weights, values, W , n - 1)));
    DP[n][W] = temp;
    return temp;

  }
  else { // no enough space
    return knapsack(weights, values, W , n - 1);
  }
}

void solve() {

  ll n, W;
  cin >> n >> W;
  lli weights[n], values[n];
  range(0, n, 1, i) {
    lli x; cin >> weights[i];
    // weights.pb(x);
  }
  range(0, n, 1, i) {
    lli x; cin >> values[i];
    // values.pb(x);
  }
//   DP.resize(1001, vector<lli>(1001));
  // range(0, n + 1, 1, i)
  // DP[0][i] = -1;
  // range(0, W + 1, 1, j)
  // DP[j][0] = -1;
  memset(DP, -1, sizeof(DP));
  cout << knapsack(values, weights, W, n);
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