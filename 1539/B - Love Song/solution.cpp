#include "bits/stdc++.h"
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<int> pref(n+1,0);
    for(int i=1;i<=n;i++){
        int val=s[i-1]-'a'+1;
        pref[i]=pref[i-1]+val;}
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<endl;}
    return 0;
}