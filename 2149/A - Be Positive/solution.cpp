#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0,cnt=0;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                ans++;}
            if(a[i]==-1){
                cnt++;;}}
        if(cnt%2==1){
            ans+=2;}
        cout<<ans<<endl;}
    return 0;
}