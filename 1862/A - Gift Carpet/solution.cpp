#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string> carpet(n);
        for(int i=0;i<n;i++){
            cin>>carpet[i];}
        string vika="vika";
        int ans=0;
        for(int i=0;i<m;i++){
            bool check=false;
            for(int j=0;j<n;j++){
                if(carpet[j][i]==vika[ans]){
                    check=true;}}
            if(check){
                ++ans;
                if(ans==4){
                    break;}}}
        if(ans==4){
            cout<<"YES"<<endl;}
        else{
            cout<<"NO"<<endl;}}
    return 0;
}