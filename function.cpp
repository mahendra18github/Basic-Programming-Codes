#include<iostream>
using namespace std;

void sayHi(string name, int centuries){
    cout<<name<<" is the gratest batsman of all time and he has scored "<<centuries<<" international centuries "<<endl;
}
int main(){
 sayHi("Sachin",100);
 sayHi("Virat",70);
 sayHi("Rohit",41);
return 0;
}