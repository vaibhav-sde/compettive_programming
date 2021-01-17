#include<bits/stdc++.h>
using namespace std;
void solve(){
    int N;
    string S,P;
    cin>>N>>S>>P;
    int zeros=0,once=0;
    for(int i=0;i<N;i++){
        if(S[i] != P[i]){
            if(S[i]=='0')
                zeros++;
            else
                once++;
        }
    }
//    cout<<zeros<<" "<<once<<endl;
    if(zeros != once){
        cout<<"No"<<endl;
        return;
    }
    int onceSoFar=0;
    bool ans= true;
    for(int i=0;i<N;i++){
        if(S[i] != P[i]){
            if(S[i] == '0')
                if(onceSoFar > 0)
                    onceSoFar--;
                else{
                    ans= false;
                    break;
                }
            else
                onceSoFar++;
        }
    }
    ans?cout<<"Yes"<<endl:cout<<"No"<<endl;
}
int main(){
    int T;
    T=1;
    cin>>T;
    while (T--)
        solve();
    return 0;
}
/*
 3
2
00
00
3
101
010
4
0110
0011
1
10
1100011110
1001011011
 */





//https://www.codechef.com/LTIME91B/problems/SWAP10HG