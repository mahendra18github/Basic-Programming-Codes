/*We need to write a program which prints if a number is more than 10,
equal to 10 or less than 10. This could be done using relational operators
with if else statements.*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>10){
        cout<<"More than 10"<<endl;
    }
    else if(n<10){
        cout<<"Less than 10"<<endl;
    }
    else{
        cout<<"Equal to 10"<<endl;
    }
return 0;
}
