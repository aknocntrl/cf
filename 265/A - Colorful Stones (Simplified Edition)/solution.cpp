#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int ans=0;
    for(char c:t){
        if(c==s[ans]){
            ans++;}}
    cout<<ans+1<<endl;
    return 0;
}