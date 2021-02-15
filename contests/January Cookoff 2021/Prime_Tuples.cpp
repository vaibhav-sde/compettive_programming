// problem link : https://www.codechef.com/COOK126C/problems/PTUPLES
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<lli, lli> plli;
int prime[1000000 + 1];
void SeiveOfEratosthenes() {
  memset(prime, -1, sizeof(prime));
  for (int p = 2; p * p <= (1000000); p++)
  {
    if (prime[p] == -1)
    {
      for (int i = p * p; i <= (1000000); i += p)
        prime[i] = -10;
    }
  }
  lli ct = 0;
  prime[3] = 0;
  for (lli i = 5; i <= 1000000; i++) {
    if (prime[i] == -1 ) {
      if ((prime[i - 2] >= 0 || prime[i - 2] == -1)) {
        prime[i] = ++ct;
      } else {
        prime[i] = ct;
      }
    }
  }
}
void solve() {
  lli n, m, k, a, b, c = 0, p, q;
  cin >> n;
  if (prime[n] >= 0)
    cout << prime[n];
  else {
    lli index = n;
    while (prime[n] < 0) {
      n--;
    }
    cout << prime[n];
  }
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  lli t = 1;
  cin >> t;
  SeiveOfEratosthenes();
  while (t--) {
    solve();
    pnl;
  }
  return  0;
}

/*
sample IO :

2
1000
2500




35
72




*/



