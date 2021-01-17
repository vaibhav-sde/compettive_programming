/*
https://www.codechef.com/JAN21C/problems/DIVTHREE
*/
#include<bits/stdc++.h>
#define range(x,y,z) for(int i=x;i<y;i=i+z)
typedef long long int lli;
typedef long long ll;
using namespace  std;
void solve(){
    lli N,K,D;
    cin>>N>>K>>D;
    lli tp=0;
    range(0,N,1){
        lli c;
        cin>>c;
        tp+=c;
    }
    tp/K<D?cout<<tp/K:cout<<D;
    cout<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    int t;
    // t=1;
    cin>>t;
    while(t--)
        solve();
    return  0;
}
