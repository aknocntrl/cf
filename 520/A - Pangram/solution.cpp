#include<iostream>
#include<set>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    set<int> atoz;
    for(i=0;i<n;i++){
        char c;
        cin>>c;
        atoz.insert(tolower(c));}
    cout<<(atoz.size()==26?"YES":"NO");
    return 0;
}