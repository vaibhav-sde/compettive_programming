/*
        https://www.codechef.com/JAN21C/problems/BILLRD
*/
#include<bits/stdc++.h>
using namespace  std;
#define range(x,y,z,vnm) for(long long int vnm=x;vnm<y;vnm=vnm+z)
#define el endl;
#define pnl cout<<el;
typedef long long int lli;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<lli,lli> plli;
void solve(){
    lli N,K,x,y;
    vector<plli> walls;
    walls.resize(4);
    cin>>N>>K>>x>>y;
    if( x==y){
        cout<<N<<" "<<N<<endl;
        return;
    }
    if(x-y > 0 ){
        walls[0].second=0;
        walls[0].first=(x-y);
        walls[1].first=N;
        walls[1].second=N-walls[0].first;
        walls[2].first=walls[1].second;
        walls[2].second=walls[1].first;
        walls[3].first=walls[0].second;
        walls[3].second=walls[0].first;
    }
    else{
        walls[0].first=0;
        walls[0].second=(y-x);
        walls[1].first=N-walls[0].second;
        walls[1].second=N;
        walls[2].first=walls[1].second;
        walls[2].second=walls[1].first;
        walls[3].first=walls[0].second;
        walls[3].second=walls[0].first;
    }
    cout<<walls[(K%4)].first<<" "<<walls[(K%4)].second<<endl;
}
int main(){
    lli t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return  0;
}