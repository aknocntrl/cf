#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    char c;
    string a;
    a="codeforces";
    while(n--){
        cin>>c;
        bool found=false;
        for(i=0;i<a.size();i++){
            if(c==a[i]){
                found=true;
                break;}}
        if(found){
            cout<<"YES"<<endl;}
        else
        cout<<"NO"<<endl;}
    return 0;
}