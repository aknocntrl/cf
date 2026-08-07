#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int one=0,zero=0;
    for(char c:s){
        if(c=='n'){
            one++;}
        else if(c=='z'){
            zero++;}}
    while(one>0){
        cout<<1<<" ";
        one--;}
    while(zero>0){
        cout<<0<<" ";
        zero--;}
    return 0;
}