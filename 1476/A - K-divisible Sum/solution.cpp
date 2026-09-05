#include<bits/stdc++.h>
using namespace std;;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long a=(n+k-1)/k;
        k*=a;
        cout<<(k+n-1)/n<<endl;}
    return 0;
}