#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int n;
    cin>>n;
    cout<<a<<" "<<b<<endl;
    while(n--){
        string x,y;
        cin>>x>>y;
        if(a==x){
            a=y;}
        else
        b=y;
        cout<<a<<" "<<b<<endl;}
    return 0;
}