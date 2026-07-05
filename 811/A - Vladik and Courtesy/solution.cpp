#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int i=1;
    while(true){
        if(i%2==1){
            if(a<i){
                cout<<"Vladik"<<endl;
                break;}
            a-=i;}
        else{
            if(b<i){
                cout<<"Valera"<<endl;
                break;}
            b-=i;}
        i++;}
    return 0; 
}