#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char l=-1,r=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                l=i;
                break;}}
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                r=i;
                break;}}
        int ans=0;
        if(l!=-1){
            for(int i=l;i<=r;i++){
                if(s[i]=='0'){
                    ans++;}}}
        cout<<ans<<endl;}
    return 0;
}