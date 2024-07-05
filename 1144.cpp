#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i,d,e,f;
    cin>>n;
    for(i=1;i<=n;i++){
        d=i*i;
        e=i*d;
        f=e+1;
        cout<<i<<" "<<d<<" "<<e<<endl;
        //cout<<i<<"\n"<<i<<endl;
        cout<<i<<" "<<d+1<<" "<<e+1<<endl;
    }
    //cout<<i<<"\n"<<i+1<<endl;
    return 0;
}