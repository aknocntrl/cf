#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];}
    int m=abs(a[0]-a[1]);
    int ans1=1,ans2=2;
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<m){
            m=abs(a[i]-a[i-1]);
            ans1=i;
            ans2=i+1;}}
    if(abs(a[n-1]-a[0])<m){
        ans1=n;
        ans2=1;}
    cout<<ans1<<" "<<ans2;
    return 0;
}