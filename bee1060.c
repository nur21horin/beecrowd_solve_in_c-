#include<stdio.h>
int main(){
  float n;
  int i,positivenumber=0;
  for(i=0;i<6;i++){
    scanf("%f",&n);
    if(n>0){
        positivenumber++;
    }
  }
  printf("%d valores positivos\n",positivenumber);
    return 0;
}