#include<iostream>
/*Solving by Nur Mohammod*/
using namespace std;
int main(){
    int a,x,d,e;
    d=0;
    e=0;   
     cin>>x;
    for(int i=0;i<x;i++){
        cin>>a;
        if(a>=10 && a<=20){
            d++;
        }else{
            e++;
        }
    }
cout<<d <<" in\n";
cout<<e <<" out\n";
return 0;
}