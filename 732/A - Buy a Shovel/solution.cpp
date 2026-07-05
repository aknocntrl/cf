#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int i=1;
    while(true){
        int x=i*k;
        if(x%10==0 || x%10==r){
            cout<<i<<endl;
            break;}
        i++;}
    return 0;
}