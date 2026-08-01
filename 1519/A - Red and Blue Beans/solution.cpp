#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long r,b,d;
        cin>>r>>b>>d;
        cout<<(max(r,b)<=min(r,b)*(d+1)?"YES":"NO")<<endl;}
    return 0;
}