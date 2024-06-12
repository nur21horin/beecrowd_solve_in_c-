#include<iostream>
using namespace std;
int main(){
    int t;//t=test case
    cin>>t;
    while(t--){
       int a,b;
       cin>>a>>b;//a=monday to thursday and b=friday
       //mulltiply four days and add them
       int c=(4*a)+b;
       cout<<c<<endl;
    }
    return 0;
}