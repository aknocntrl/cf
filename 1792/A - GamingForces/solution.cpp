#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++){
            int h;
            cin>>h;
            cnt+=(h==1);}
        cout<<n-cnt/2<<endl;}
    return 0;
}