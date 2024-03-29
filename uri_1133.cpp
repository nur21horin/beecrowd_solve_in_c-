#include<iostream>/*
Uri_1133 solution 
Nur Mohammod */
using namespace std;
int main(){

    int x,y;
    
    cin>>x>>y;
    if(x<y){
    for(int i=x+1;i<y;++i){//in loop using first bracket methods
        if(i%5==2 || i%5==3){
        cout<<i<<endl;
        }
        
    }}
    else if(x>y){
        for(int i=y+1;i<x;++i){
        if(i%5==2 || i%5==3){
        cout<<i<<endl;
        }
    }}
    return 0;
}