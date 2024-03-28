#include<iostream>
/* Nur Mohammod
Uri_1039 sollution*/
#include<cmath>
using namespace std;
string stranger(int R1,int X1,int Y1,int R2,int X2,int Y2){
    double d=sqrt(pow(X2-X1,2)+pow(Y2-Y1,2));
    if(d+R2<=R1){
        return "RICO";
    }else{
        return "MORTO";
    }
}
int main(){
    int X1,X2,Y1,Y2,R1,R2;
    while(cin>>R1>>X1>>Y1>>R2>>X2>>Y2){
        string result=stranger(R1,X1,Y1,R2,X2,Y2);
        cout<<result<<endl;
    }
return 0;
}
