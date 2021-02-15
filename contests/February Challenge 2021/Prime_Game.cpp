// problem link : https://www.codechef.com/FEB21C/problems/PRIGAME
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
int prime[1000000 + 2];
void SeiveOfEratosthenes() {
	memset(prime, -1, sizeof(prime));
	for (int p = 2; p * p <= (1000000); p++)
	{
		if (prime[p] == -1)
			for (int i = p * p; i <= (1000000); i += p)
				prime[i] = 1;
	}
	lli ct = 0;
	foo (2, 1000000 + 1) {
		if (prime[i] == -1) {
			ct++;
		}
		prime[i] = ct;
	}
}
void solve() {
	lli n, m, k, a, b, c, p, q, x, y;
	scanf("%lld%lld", &x, &y);
	prime[x] < y ? printf("Chef\n") : printf("Divyam\n");
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	SeiveOfEratosthenes();
	lli t = 1;
	scanf("%lld", &t);
	while (t--) {
		solve();

	}
	return  0;
}

/*
sample IO :


3
1 2
3 1
2021 42

Chef
Divyam
Divyam


*/



