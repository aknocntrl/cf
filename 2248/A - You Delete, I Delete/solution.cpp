#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=s.find('0');
        s.erase(a,1);
        int b=s.find('1');
        s.erase(b,1);
        cout<<s<<endl;}
    return 0;
}