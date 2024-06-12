#include<iostream>
using namespace std;
int main(){
    int t;//t=test cases
    cin>>t;
    while(t--){
        /*convert time to millitary grade time*/
        int time;
        cin>>time;
        //convert time to millitary grade
        int d=12+time;
        if(12<=d && d<=19){
            cout<<"yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }}
        
        return 0;

}