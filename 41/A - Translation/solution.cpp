#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    cout<<(s==t?"YES":"NO");
    return 0;
}