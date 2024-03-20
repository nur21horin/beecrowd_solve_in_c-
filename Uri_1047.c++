#include<iostream>
/*Nur Mohammod
URI_1047 sollution
formula=first convert regular time to millitary grade time*/
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;//a=hour,b=minute,c=finalhour,d=finalminute
int time=(((c*60)+d)-((a*60)+b));//convert time to millitary grade
if(time<=0)
time+=24*60;//time reserve
int f=time/60;//finding hour
int e=time%60;//finding minute(s)
cout<<"O JOGO DUROU "<<f<<" HORA(S) E "<<e<<" MINUTO(S)"<<endl;
return 0;
}