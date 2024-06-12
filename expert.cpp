#include<iostream>
using namespace std;
int main(){
    int t;//t=test case
    cin>>t;//nr mohammod
    while(t--){
        float x,y;
        cin>>x>>y;
        float d=(100/x)*y;
        if(d>=50){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    }
    return 0;
}