#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool ok=false;
        for(long long i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                cout<<1<<endl;
                ok=true;
                break;}}
        if(!ok){
            cout<<s.size()<<endl;}}
    return 0;
}