#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s,a;
        cin>>s>>a;
        int j=0,n=s.size(),m=a.size();
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                if(j<m){
                    s[i]=a[j];
                    j++;}
                else{
                    s[i]='a';}}
            else if(j<m && s[i]==a[j]){
                j++;}}
        if(j==m){
            cout<<"YES"<<endl<<s<<endl;}
        else{
            cout<<"NO"<<endl;}}
    return 0;
}