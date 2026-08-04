#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        vector<int> v(3);
        cin>>v[0]>>v[1]>>v[2];
        while(true){
            sort(v.begin(),v.end());
            if(v[0]==v[1] || v[1]==v[2]){
                break;}
            v[0]++;
            v[2]--;
            ans++;}
        cout<<ans<<endl;}
    return 0;
}