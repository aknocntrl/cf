#include<bits/stdc++.h>
using namespace std;
int a[26],b[26];
int main(){
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        for(int i=0;i<26;++i){
            a[i]=b[i]=0;}
        for(char &c:s){
            a[c-'a']++;}
        for(char &c:t){
            b[c-'a']++;}
        bool ans=true;
        for(int i=0;i<26;++i){
            if(a[i]!=b[i]){
                ans=false;}}
        cout<<(ans?"YES":"NO")<<endl;}
    return 0;
}