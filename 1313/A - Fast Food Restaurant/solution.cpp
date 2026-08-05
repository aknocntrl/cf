#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        for(int i=0;i<3;i++){
            if(v[i]>0){
                ans++;
                v[i]--;}}
        if(v[1]>0 && v[2]>0){
            ans++;
            v[1]--;
            v[2]--;}
        if(v[0]>0 && v[2]>0){
            ans++;
            v[0]--;
            v[2]--;}
        if(v[0]>0 && v[1]>0){
            ans++;
            v[0]--;
            v[1]--;}
        if(v[0]>0 && v[1]>0 && v[2]>0){
            ans++;}
        cout<<ans<<endl;}
    return 0;
}