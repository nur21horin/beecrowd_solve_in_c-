#include<iostream>
using namespace std;
int main(){
      int size;
      cin>>size;
      int store1=0,store2=0;
      for(int i=0;i<size;i++){
        cin>>i;
        if(i%2==0){
          store1++;
        }else{
            store2++;
        }
       
       }
       if(store1>store2){
        cout<<"READY FOR BATTLE";
       }else{
        puts<<"NOT READY";
       }
       return 0;
}