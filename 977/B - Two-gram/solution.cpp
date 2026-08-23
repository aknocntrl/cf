#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int> mp;
    string ans="";
    int mx=0;
    for(int i=0;i<n-1;i++){
        string t=s.substr(i,2);
        mp[t]++;
        if(mp[t]>mx){
            mx=mp[t];
            ans=t;}}
    cout<<ans<<endl;
    return 0;
}