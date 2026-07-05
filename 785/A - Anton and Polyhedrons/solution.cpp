#include<iostream>
using namespace std;
int main(){
    int n,i,a=0;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>s;
        if(s=="Tetrahedron"){
            a=a+4;}
        else if(s=="Cube"){
            a=a+6;}
        else if(s=="Octahedron"){
            a=a+8;}
        else if(s=="Dodecahedron"){
            a=a+12;}
        else if(s=="Icosahedron"){
            a=a+20;}
        }
    cout<<a<<endl;
    return 0;
}