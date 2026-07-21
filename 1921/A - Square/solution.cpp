#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int minx=INT_MAX,maxx=INT_MIN;
        for(int i=0;i<4;i++){
            int x,y;
            cin>>x>>y;
            minx=min(minx,x);
            maxx=max(maxx,x);}
        int a=maxx-minx;
        cout<<a*a<<endl;}
    return 0;
}