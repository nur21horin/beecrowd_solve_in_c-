#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int arr[10];
    int N;
    int i;
    cin>>arr[0];
    for(i=1;i<10;++i){
        arr[i]=2*arr[i-1];
    }
    for(int i=0;i<10;++i){
     printf("N[%d] = %d\n",i,arr[i]);
    }
}