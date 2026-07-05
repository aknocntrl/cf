#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=max(0,max(b,c)+1-a);
        int y=max(0,max(c,a)+1-b);
        int z=max(0,max(a,b)+1-c);
        cout<<x<<' '<<y<<' '<<z<<endl;}
    return 0;
}