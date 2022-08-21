#include<iostream>
using namespace std;
int main(){
    int num;
    int fact=1;

    cin>>num;
    cout<<endl;
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
    return 0;
}