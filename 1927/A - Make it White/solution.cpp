#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=n-1;
        while(a<n && s[a]!='B'){
            a++;}
        while(b>=0 && s[b]!='B'){
            b--;}
        cout<<b-a+1<<endl;}
    return 0;
}