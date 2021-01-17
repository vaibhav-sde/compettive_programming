/*
https://www.codechef.com/JAN21C/problems/DECODEIT
*/
#include<bits/stdc++.h>
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
using namespace  std;
void solve(){
    lli  s;cin>>s;
    string x;cin>>x;
    lli ps[]={8,4,2,1};
    lli position=0;
    range(0,x.size(),4,index) {
        range(index, index + 4, 1, currchar)
            if (x[currchar] == '1')
                position += (ps[currchar % 4]);
        cout << (char)(position + 97);
        position=0;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
            freopen("input.txt", "r", stdin);
            freopen("output.txt", "w", stdout);
    #endif
    lli t=1;
    cin>>t;
    while(t--){
        solve();
        pnl;
    }
    return  0;
}
