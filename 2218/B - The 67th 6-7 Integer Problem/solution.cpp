#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        int m=-100;
        for(int i=0;i<7;i++){
            int x;
            cin>>x;
            sum+=x;
            m=max(m,x);}
        cout<<2*m-sum<<endl;}
    return 0;
}