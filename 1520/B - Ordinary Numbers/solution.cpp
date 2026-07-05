#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s=to_string(n);
        int len=s.length();
        long long ans=(len-1)*9;
        long long a=0;
        for(int i=0;i<len;i++){
            a=a*10+1;}
        for(int i=1;i<=9;i++){
            if(a*i<=n){
                ans++;}}
        cout<<ans<<endl;}
    return 0;
}