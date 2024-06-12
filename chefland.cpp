#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int d=y/z;
    int e=d*100;
    if(e>100){
    cout<<"Yes"<<endl;
    }else{
        cout<<"No";
    }
    }
    return 0;
}