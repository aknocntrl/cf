#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int ans=0;
        for(char c='A';c<='G';c++){
            int cnt=count(s.begin(),s.end(),c);
            if(cnt<m){
                ans+=(m-cnt);}}
        cout<<ans<<endl;}
    return 0;
}