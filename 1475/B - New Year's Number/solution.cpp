#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long b=n%2020;
        if(b<=n/2021){
            cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;}}
    return 0;
}