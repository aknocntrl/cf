#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char d;
        cin>>d;
        string s;
        cin>>s;
        bool ok=false;
        for(int i=0;i<n;i++){
            if(!ok && s[i]<d){
                cout<<d;
                ok=true;}
            cout<<s[i];}
        if(!ok){
            cout<<d;}
        cout<<endl;}
    return 0;
}