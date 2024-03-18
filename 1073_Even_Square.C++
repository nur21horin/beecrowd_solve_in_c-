#include<iostream>
using namespace std;
int main(){
int N;
cin>>N;
int i=1;
while(i<=N){
    if(i%2==0){
    int c=i*i;
    cout<<i<<"^2 = "<<c<<endl;
    }
    i++;
}
return 0;

}