#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,a=0,m=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                a++;
                m=max(m,a);}
            else
            a=0;}
        cout<<m<<endl;}
    return 0;
}