#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t;
        bool ans=true;
        cin>>s>>t;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                if(t[i]!='R'){
                    cout<<"NO"<<endl;
                    ans=false;
                    break;}}
            else{
                if(t[i]=='R'){
                    cout<<"NO"<<endl;
                    ans=false;
                    break;}}}
        if(ans){
            cout<<"YES"<<endl;}}
    return 0;
}