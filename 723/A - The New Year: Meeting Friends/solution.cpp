#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<max({x,y,z})-min({x,y,z});
    return 0;
}