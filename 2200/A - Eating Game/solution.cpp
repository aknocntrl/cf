#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[10];
        int mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);}
        int count=0;
        for(int i=0;i<n;i++){
            if(mx==a[i]){
                count++;}}
        cout<<count<<endl;}
    return 0;
}