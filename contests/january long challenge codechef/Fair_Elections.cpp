/*
https://www.codechef.com/JAN21C/problems/FAIRELCT
*/
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z) for(int i=x;i<y;i=i+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
void solve() {
    int N, M;
    cin >> N >> M;
    lli johnvotes[N];
    lli jack[M];
    lli totalVotesofJohn = 0, totalVotesofJack = 0;
    range(0, N, 1) {
        lli x; cin >> x;
        totalVotesofJohn += x;
        johnvotes[i] = x;
    }
    range(0, M, 1) {
        lli x; cin >> x;
        totalVotesofJack += x;
        jack[i] = x;
    }
    sort(johnvotes, johnvotes + N);
    sort(jack, jack + M);
    lli left = 0, right = M - 1;
    lli countSwaps = 0;
    if (totalVotesofJohn > totalVotesofJack) {
        cout << 0;
        return;
    }
    while (left < N && right >= 0) {
        countSwaps++;
        lli L = johnvotes[left];
        lli R = jack[right];

        totalVotesofJohn -= L;
        totalVotesofJack += L;

        totalVotesofJohn += R;
        totalVotesofJack -= R;
        if (totalVotesofJohn > totalVotesofJack) {
            break;
        }
        left++;
        right--;
    }
    (totalVotesofJohn > totalVotesofJack) ? cout << countSwaps : cout << -1;
}
int main() {
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    lli T;
    T = 1;
    cin >> T;
    while (T--)
    {
        solve();
        pnl;
    }

    return 0;
}