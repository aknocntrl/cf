#include<iostream>
using namespace std;
int main(){
    int t,room=0;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            room++;}}
    cout<<room<<endl;
    return 0;
}