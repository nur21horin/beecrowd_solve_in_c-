#include<iostream>
using namespace std;
int main(){
    int j,n,i,N[1000];
    cin>>n;
  for(j=0,i=0;j<1000;j++){
     printf("N[%d] = %d\n",j,i);
     i++;
     if(i==n)
     i=0;
         
    }
    return 0;
}
