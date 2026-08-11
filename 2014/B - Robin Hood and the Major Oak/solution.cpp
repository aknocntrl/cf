#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a=n-k+1;
        long long sum=(n+1)/2-a/2;
        if(sum%2==0){
            cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;}}
    return 0;
}