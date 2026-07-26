#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        long long sum=a+b+c;
        long long day=(n/sum)*3;
        long long rem=n%sum;
        if(rem==0){
            cout<<day<<endl;}
        else if(rem<=a){
            cout<<day+1<<endl;}
        else if(rem<=a+b){
            cout<<day+2<<endl;}
        else{
            cout<<day+3<<endl;}}
    return 0;
}