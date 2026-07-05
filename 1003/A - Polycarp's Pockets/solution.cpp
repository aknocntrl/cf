#include "bits/stdc++.h"
using namespace std;
class Solution{
    public:
    void solve(){
        int n;
        cin>>n;
        vector<int> freq(101,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            freq[x]++;}
        int ans=0;
        for(int i=0;i<=100;i++){
            ans=max(ans,freq[i]);}
        cout<<ans;}};
int main(){
    Solution obj;
    obj.solve();
    return 0;
}