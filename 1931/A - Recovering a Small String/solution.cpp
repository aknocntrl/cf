#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="aaa";
        n-=3;
        for(int i=2;i>=0;i--){
            int add=min(25,n);
            s[i]+=add;
            n-=add;}
        cout<<s<<endl;}
    return 0;
}