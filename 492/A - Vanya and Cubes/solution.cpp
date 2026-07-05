#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int height=0;
    int used=0;
    for(int i=1; ;i++){
        int need=i*(i+1)/2;
        if(used+need<=n){
            used+=need;
            height++;}
        else
        break;}
    cout<<height<<endl;
    return 0;
}