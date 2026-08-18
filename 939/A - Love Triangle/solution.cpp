#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> f(n+1);
    for(int i=1;i<=n;i++){
        cin>>f[i];}
    for(int i=1;i<=n;i++){
        if(f[f[f[i]]]==i){
            cout<<"YES";
            return 0;}}
    cout<<"NO";
    return 0;
}