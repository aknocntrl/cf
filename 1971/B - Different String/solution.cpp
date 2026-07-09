#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool same=true;
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[0]){
                same=false;
                break;}}
        if(same){
            cout<<"NO"<<endl;}
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<s.length()-1;i++){
                if(s[i]!=s[i+1]){
                    swap(s[i],s[i+1]);
                    break;}}
            cout<<s<<endl;}}
    return 0;
}