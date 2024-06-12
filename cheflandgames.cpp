#include<iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    while(test_case--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0){
            cout<<"IN"<<endl;
        }else{
            cout<<"OUT"<<endl;
        }
    }
    return 0;
}