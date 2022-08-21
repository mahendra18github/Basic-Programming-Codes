#include<iostream>
using namespace std;
int main(){
    int length,volume;
    cout<<"Calculate volume of a cube\n";
    cout<<"--------------------------\n";
    cout<<"Input the side of the cube :";
    cin>>length;
    volume=length * length * length;
    cout<<"the volume of a cube is:"<<volume<<endl;
    cout<<endl;
    return 0;
}