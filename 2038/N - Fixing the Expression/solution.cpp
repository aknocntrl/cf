#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=s[0]-'0';
        int b=s[2]-'0';
        if(a>b){
            s[1]='>';}
        else if(a<b){
            s[1]='<';}
        else
        s[1]='=';
        cout<<s<<endl;}
    return 0;
}