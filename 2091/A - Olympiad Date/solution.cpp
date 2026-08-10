#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(10);
        bool ok=false;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            a[num]++;
            if(a[0]>=3 && a[1]>=1 && a[2]>=2 && a[3]>=1 && a[5]>=1 && !ok){
                cout<<i+1<<endl;
                ok=true;}}
        if(!ok){
            cout<<0<<endl;}}
    return 0;
}