#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            int c;
            cin>>c;
            if(c==1){
                a++;}
            else{
                b++;}}
        if((a+2*b)%2!=0){
            cout<<"NO"<<endl;}
        else{
            int sum=(a+2*b)/2;
            if(sum%2==0 || (sum%2==1 && a!=0)){
                cout<<"YES"<<endl;}
            else{
                cout<<"NO"<<endl;}}}
    return 0;
}