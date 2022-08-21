#include<iostream>
using namespace std;
int main(){
    float lencm,lenm,lenkm;
    cout<<"Convert centimeter into meter and kilometer\n";
    cout<<"--------------------------------------------\n";
    cout<<"Input the length in centimeter : ";
    cin>>lencm;
    lenm=lencm/100;
    lenkm=lencm/100000;
    cout<<"The length in the meter is : "<<lenm<<endl;
    cout<<"The length in the kilometer is : "<<lenkm<<endl;
    cout<<endl;
    return 0;
}