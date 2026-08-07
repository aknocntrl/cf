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
        int ans=0,cnt=0;
        for(auto &x:s){
            if(x=='*'){
                cnt=0;}
            else{
                cnt++;}
            ans=max(ans,(cnt+1)/2);}
        cout<<ans<<endl;}
    return 0;
}