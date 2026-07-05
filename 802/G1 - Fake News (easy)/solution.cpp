#include"bits/stdc++.h"
using namespace std;
int main(){
    string s,ok="heidi";
    cin>>s;
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==ok[j]){
            j++;}
        if(j==5){
            break;}}
    cout<<(j==5?"YES":"NO");
    return 0;
}