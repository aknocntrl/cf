#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,a;
    string s;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>s;
        sort(s.begin(),s.end());
        cout<<(s=="Timru"?"YES":"NO")<<endl;
    }
    return 0;
}