#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];}
        bool ok=true;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])!=5 && abs(a[i]-a[i+1])!=7){
                ok=false;
                break;}}
        if(ok){
            cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;}}
    return 0;
}