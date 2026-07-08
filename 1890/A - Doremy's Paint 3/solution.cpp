#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;}
        if(mp.size()==1){
            cout<<"YES"<<endl;}
        else if(mp.size()==2){
            auto it=mp.begin();
            int a=it->second;
            it++;
            int b=it->second;
            if(abs(a-b)<=1){
                cout<<"YES"<<endl;}
            else
            cout<<"NO"<<endl;}
        else
        cout<<"NO"<<endl;}
    return 0;
}