#include<iostream>
#include<set>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(true){
        a++;
        string s=to_string(a);
        set<char> st(s.begin(),s.end());
        if(st.size()==4){
            cout<<a;
            break;}}
    return 0;
}