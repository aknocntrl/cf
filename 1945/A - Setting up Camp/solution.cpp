#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int tent=a;
        int need=(3-b%3)%3;
        if(c<need){
            cout<<-1<<endl;
            continue;}
        c-=need;
        tent+=(b+need)/3;
        tent+=(c+2)/3;
        cout<<tent<<endl;}
    return 0;
}