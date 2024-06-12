#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int taka;
        cin>>taka;
        if(taka<=100){
            cout<<taka<<endl;
        }else if(taka>100&&taka<=1000){
            int newtaka=taka-25;
            cout<<newtaka<<endl;
        }else if(1000<taka && taka<=5000){
            int ntaka=(taka - 100);
            cout<<ntaka<<endl;
        }else{
            int nataka=taka - 500;
            cout<<nataka<<endl;
        }

    }
    return 0;
}