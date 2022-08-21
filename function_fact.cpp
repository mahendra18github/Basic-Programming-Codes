#include<iostream>
using namespace std;
/*Calculate factorial value of an integer using a function*/
int fact(int);
int main(){
    int num;
    int factorial;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    factorial=fact(num);
    cout<<"Factorial of "<<num<<" = "<<factorial<<endl;
    return 0;

}
int fact(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }
    return(factorial);
}