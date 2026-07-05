#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int m=0,ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m=max(m,a[i]);}
    for(int i=0;i<n;i++){
        ans+=(m-a[i]);}
    cout<<ans;
    return 0;
}