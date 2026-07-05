#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool ok=false;
        for(int i=0;i<n;i++){
            if(c[i]!=a[i] && c[i]!=b[i]){
                ok=true;
                break;}}
        cout<<(ok?"YES":"NO")<<endl;}
    return 0;
}