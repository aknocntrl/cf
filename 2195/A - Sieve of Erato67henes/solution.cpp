#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        bool ok=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==67){
                ok=true;}}
        cout<<(ok?"YES":"NO")<<endl;}
    return 0;
}