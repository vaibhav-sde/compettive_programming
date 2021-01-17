#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
int global = 0;
unordered_map<int, int> record;
int knapsack(int wt[], int val[], int W, int n) {
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] <= W) { //include
        return (max(
                    val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1),
                    knapsack(wt, val, W             , n - 1)
                ));
    }
    else {
        return knapsack(wt, val, W, n - 1);
    }
}
void solve() {
    int n = 4;
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int W = 10;
    cout << knapsack(wt, val, W, n);
    pnl;
    cout << global << el;
}
int main() {
    lli t = 1;
    // cin>>t;
    while (t--) {
        solve();
        pnl;
    }
    return  0;
}