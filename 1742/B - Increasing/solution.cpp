#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> x(n);
        set<int> a;
        bool ok=true;
        for(int i=0;i<n;i++){
            cin>>x[i];}
        for(int i=0;i<n;i++){
            if(a.find(x[i])!=a.end()){
                ok=false;
                break;}
            a.insert(x[i]);}
        if(ok){
            cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;}}
    return 0;
}