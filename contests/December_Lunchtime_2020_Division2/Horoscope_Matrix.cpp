#include<bits/stdc++.h>
using namespace  std;
void solve(){
    int N,M;
    cin>>N>>M;
    int nums[N][M];
    for(int i = 0; i< N;i++)
        for(int j = 0; j< M;j++)
            cin>>nums[i][j];
    for(int i = 0; i< N;i++){
        for(int j = 0; j< M;j++)
            cout<<nums[i][j]<<" ";
        cout<<endl;
    }

    int Q;
    cin>>Q;
    while(Q--){
        int X,Y,V;
        cin>>X>>Y>>V;
        int x,y;
        x=X;y=Y;
        while(x>=0)
    }


}
int main(){
    int t;
    cin>>t;
    while(t--)
            solve();
    return  0;
}