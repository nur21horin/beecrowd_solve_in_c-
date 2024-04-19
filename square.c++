#include<iostream>
#include<math.h>
using namespace std;
//function to calculate the distance between two points
double calculatedistance(int x1,int y1,int x2,int y2){
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
//function to calculate the area of square
double calculatesquarearea(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
double sidelength=calculatedistance(x1,y1,x2,y2);
double area=pow(sidelength,2);
return area;
}
int main(){
    int t;//number of test
    cin>>t;
    while(t--){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    double area=calculatesquarearea(x1,y1,x2,y2,x3,y3,x4,y4);
    cout<<static_cast<int>(area)<<endl;
    }

return 0;


}