#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=k){
                sum+=x;}
            else if(x==0 && sum>0){
                sum--;
                ans++;}}
        cout<<ans<<endl;}
    return 0;
}