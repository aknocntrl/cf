#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans=0;
        int rem=m;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if((int)s.size()<=rem){
                rem-=s.size();
                ans++;}
            else{
                for(int j=i+1;j<n;j++){
                    cin>>s;}
                break;}}
        cout<<ans<<endl;}
    return 0;
}