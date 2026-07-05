#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string rev=s;
        reverse(rev.begin(),rev.end());
        cout<<s+rev<<endl;}
    return 0;
}