#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,n=0;
        cin>>a>>b>>c>>d;
        if(a<b){
            n++;}
        if(a<c){
            n++;}
        if(a<d){
            n++;}
        cout<<n<<endl;
    }
    return 0;
}