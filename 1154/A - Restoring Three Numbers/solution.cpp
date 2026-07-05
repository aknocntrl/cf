#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];}
    sort(a,a+4);
    int d=a[3];
    cout<<d-a[0]<<" "
         <<d-a[1]<<" "
         <<d-a[2];
    return 0;
}