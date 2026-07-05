#include<iostream>
using namespace std;
int main(){
    int n,i,m,c,a=0,b=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m>>c;
        if(m>c){
            a=a+1;}
        else if(m<c){
            b=b+1;}}
    if(a>b){
        cout<<"Mishka"<<endl;}
    else if(a<b){
        cout<<"Chris"<<endl;}
    else
    cout<<"Friendship is magic!^^";
    return 0;
}