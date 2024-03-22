#include<bits/stdc++.h>
#include<iostream>
/*Nur mohammod
Uri_1049 sollution*/
#include<string.h>
using namespace std;
int main(){
    string  a,b,c;
    cin>>a>>b>>c;
    if(a=="vertebrado" && b=="ave" &&c=="carnivoro"){
        cout<<"aguia"<<endl;
    }else if(a=="vertebrado" && b=="ave" &&c=="onivoro"){
        cout<<"pomba"<<endl;
    }else if(a=="vertebrado" && b=="mamifero" && c=="onivoro"){
        cout<<"homem"<<endl;
    }else if(a=="vertebrado" && b=="mamifero" && c=="herbivoro"){
        cout<<"vaca"<<endl;//invertibrado
    }else if(a=="invertebrado" && b=="inseto" &&c=="hematofago"){
        cout<<"pulga"<<endl;
    }else if(a=="invertebrado" && b=="inseto" && c=="herbivoro"){
        cout<<"lagarta"<<endl;
    }else if(a=="invertebrado" && b=="anelideo" && c=="hematofago"){
        cout<<"sanguessuga"<<endl;
    }else if(a=="invertebrado" && b=="anelideo" && c=="onivoro"){
        cout<<"minhoca"<<endl;
    }
    return 0;

}