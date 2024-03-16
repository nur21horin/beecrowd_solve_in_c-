#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    unordered_map<int,string>y_city={
        {61,"Brasilia"},
        {71,"Salvador"},
        {11,"Sao Paulo"},
        {21,"Rio de Janeiro"},
        {32,"Juiz de Fora"},
        {19,"Campinas"},
        {27,"Vitoria"},
        {31,"Bela Horizonte"}
    };
    int  n;
    cin>>n;
//check if the numbers exist
    if(y_city.find(n)!=y_city.end()){
        cout<<y_city[n]<<endl;
    }else{
        cout<<"DDD nao cadastrado"<<endl;
    }

    return 0;
}