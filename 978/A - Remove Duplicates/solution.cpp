#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n),ans;
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int i=n-1;i>=0;i--){
        if(s.count(a[i])==0){
            s.insert(a[i]);
            ans.push_back(a[i]);}}
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int x:ans){
        cout<<x<<" ";}
    return 0;
}