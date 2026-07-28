#include<bits/stdc++.h>
using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(auto x:s){
            if(x=='0'){
                count++;}
            else{
                count+=n-1;}}
        cout<<count<<endl;}
    return 0;
}