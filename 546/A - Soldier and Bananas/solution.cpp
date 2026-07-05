#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int a=0;
    for(int i=1;i<=w;i++){
        a=a+i*k;}
    if(a>n){
        cout<<a-n;}
    else
    cout<<0;
    return 0;
}