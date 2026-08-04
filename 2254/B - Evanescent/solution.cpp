#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int group=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                group++;}}
        int ans=INT_MAX;
        for(int i=1;i<n-1;i++){
            int L=(s[i]!=s[i-1]);
            int R=(s[i]!=s[i+1]);
            int N=(s[i-1]!=s[i+1]);
            ans=min(ans,group-L-R+N);}
        cout<<ans<<endl;}
    return 0;
}