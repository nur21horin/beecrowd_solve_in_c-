#include<iostream>
using namespace std;//Nur mohammod
int main(){
    int t;//t=test case
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int d=x*y;
        if(d>=100){
            int f=d/100;
            cout<<f<<endl;
        }else{
            cout<<0<<endl;
        }
    }
    return 0;
}