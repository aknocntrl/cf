#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int m=9;
        while(x>0){
            m=min(m,x%10);
            x/=10;}
        cout<<m<<endl;}
    return 0;
}