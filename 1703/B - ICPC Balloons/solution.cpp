#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool v[26]={};
        int r=0;
        for(char c:s){
            if(!v[c-'A']){
                r+=2;
                v[c-'A']=true;}
            else
            r++;}
        cout<<r<<endl;}
    return 0;
}