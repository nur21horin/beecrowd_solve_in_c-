#include<stdio.h>
int main(){
    int a,b,d,e;
    float c,f;
    scanf("%d %d %f %d %d %f ",&a,&b,&c,&d,&e,&f);
    float p=b*c;
    float pp=e*f;
    float value=p+pp;
    printf("VALOR A PAGAR: R$ %0.2f\n",value);
    return 0;
}