#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        double total_slice=x*y;
        //calculate the minimum size of pizza
        int min_pizzas=ceil(static_cast<double>(total_slice)/4);
        cout<<min_pizzas<<endl;}
    
    return 0;
}