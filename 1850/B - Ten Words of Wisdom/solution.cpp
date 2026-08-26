#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=-1,best=0;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(b>best && a<=10){
                ans=i;
                best=b;}}
        cout<<ans<<endl;}
    return 0;
}