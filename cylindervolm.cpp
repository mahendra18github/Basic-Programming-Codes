/*  Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32*/
#include<iostream>
using namespace std;
int main(){
    float pi=3.14,r,h,volume;
  

cout<<"Calculate the volume of a cylinder :\n";
cout<<"------------------------------------\n6";
cout<<"Input the radius of the cylinder : ";
cin>>r;
cout<<"Input the height of the cylinder : ";
cin>>h;
volume=pi*r*r*h;
cout<<"the volume of the cylinder is : "<< volume <<endl;
cout<<endl;
return 0;
}