#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int sum=0;
        while(n>0){
            if(n%2){
                sum+=x;
                n--;}
            else{
                sum+=(-1)*x;
                n--;}}
        cout<<sum<<endl;}
    return 0;
}