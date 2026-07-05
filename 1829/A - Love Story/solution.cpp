#include<iostream>
using namespace std;
int main(){
    int n,j;
    string s;
    string a="codeforces";
    cin>>n;
    while(n--){
        cin>>s;
        int b=0;
        for(j=0;j<10;j++){
            if(s[j]!=a[j]){
                b++;}}
        cout<<b<<endl;}
    return 0;
}