#include<iostream>
using namespace std;
int main(){
    int t;//t-test case
    cin>>t;
    while(t--){//for test case
    int B1,B2,B3;
    cin>>B1>>B2>>B3;
    if((B1 ==0 && B2==0)||(B1==0 && B3==0)||(B2==0 && B3==0)){
        cout<<"Water filling time"<<endl;
    }else{
        cout<<"Not now"<<endl;
    }}
    return 0;
}