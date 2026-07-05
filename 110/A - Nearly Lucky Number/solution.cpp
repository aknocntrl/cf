#include<iostream>
using namespace std;
int main(){
    string s;
    int ans=0;
    cin>>s;
    for(char c:s){
        if(c=='4' || c=='7'){
            ans++;}}
    if(ans==4 || ans==7){
        cout<<"YES";}
    else
    cout<<"NO";
    return 0;
}