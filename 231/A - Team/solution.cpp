#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int p,v,t;
        cin>>p>>v>>t;
        if(p==1 && p==v){
            ans++;}
        else if(v==1 && v==t){
            ans++;}
        else if(t==1 && t==p){
            ans++;}}
    cout<<ans;
    return 0;
}