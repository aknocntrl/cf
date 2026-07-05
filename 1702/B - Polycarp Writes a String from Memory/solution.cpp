#include"bits/stdc++.h"
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char> v;
        int day=1;
        for(char c:s){
            v.insert(c);
            if(v.size()>3){
                day++;
                v.clear();
                v.insert(c);}}
        cout<<day<<endl;}
    return 0;
}