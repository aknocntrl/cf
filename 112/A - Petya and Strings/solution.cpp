#include<iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);}
    if(s<t){
        cout<<-1;}
    else if(t<s){
        cout<<1;}
    else if(s==t){
        cout<<0;}
    return 0;
}