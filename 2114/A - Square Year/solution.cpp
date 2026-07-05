#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int sr=ceil(sqrt(s));
        if(sr*sr==s){
            cout<<0<<' '<<sr<<endl;}
        else
        cout<<-1<<endl;}
    return 0;
}