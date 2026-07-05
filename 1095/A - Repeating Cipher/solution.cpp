#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    string t;
    cin>>t;
    int index=0,gap=1;
    while(index<n){
        cout<<t[index];
        index+=gap;
        gap++;}
    return 0;
}