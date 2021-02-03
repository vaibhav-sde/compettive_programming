#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
int T[50][50];
int hits = 0;
int knapsackMemory(int wt[], int val[], int W, int n) {
    hits++;
    if (n == 0 || W == 0)
        return 0;
    if (T[n][W] != -1)
    {
        return T[n][W];
    }
    if (wt[n - 1] <= W) {
        T[n][W] = max(val[n - 1] + knapsackMemory(wt, val, W - wt[n - 1], n - 1),
                      knapsackMemory(wt, val, W            , n - 1));
        return T[n][W];
    }
    else {
        T[n][W] = knapsackMemory(wt, val, W, n - 1);
        return T[n][W];
    }

}
void solve() {
    int n = 4;
    int wt[] = {1, 3, 4, 5};
    int val[] = {1, 4, 5, 7};
    int W = 10;
    range(0, n + 1, 1, i)
    range(0, W + 1, 1, j)
    T[i][j] = -1;
    cout << knapsackMemory(wt, val, W, n); pnl;
    // cout << "ANS : " << hits << T[n + 1][W + 1];
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