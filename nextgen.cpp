#include<iostream>
using namespace std;
int main(){
    int t;//t=test case
    cin>>t;
    while(t--){
        float x,y,a,b;
        cin>>x>>y>>a>>b;
        if(a*b>=x*y){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}