// problem link :
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define foo(x,y) for(long long int i=x;i<y;i++)
// #define foo(x,y,vnm) for(long long int vnm=x;vnm<y;vnm++)
#define el "\n";
#define pnl cout<<"\n";
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
void solve() {
	int n,k;
	cin>>n>>k;
	int cnt = 0;

	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		if (5 - x >= k)
        	cnt++;
	}
	int ans = cnt / 3;
	cout<<ans;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	lli t = 1;
	// scanf("%lld", &t);
	while (t--) {
		solve();

	}
	return  0;
}

/*
sample IO :




*/



