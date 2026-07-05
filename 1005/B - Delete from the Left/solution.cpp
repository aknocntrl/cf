#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int a=0;
    int i=s.size()-1;
    int j=t.size()-1;
    while(i>=0 && j>=0 && s[i]==t[j]){
        a++;
        i--;
        j--;}
    cout<<s.size()+t.size()-2*a<<endl;
    return 0;
}