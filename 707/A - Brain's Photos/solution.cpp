#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char a;
    int b=n*m;
    while(b--){
        cin>>a;
        if(a=='C' || a=='M' || a=='Y'){
            cout<<"#Color";
            return 0;}}
    cout<<"#Black&White";
    return 0;
}