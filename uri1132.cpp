#include<stdio.h>
#include<math.h>
int main(){
    int x,y,e=0,d;
    scanf("%d%d",&x,&y);
    if(x<y){
    for(int i=x;i<=y;i++){
        if(i%13!=0){
            e+=i;
        }
    }}
    else if(x>y){
        for(int i=y;i<=x;i++){
        if(i%13!=0){
            e+=i;
        }
    }

    }
    printf("%d\n",e);
    return 0;
}