#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum=0;
    int original_num=n;

    while(n>0){
        int lastDigit=n%10;
        sum+=pow(lastDigit,3);
        n=n/10;
    }
    if(sum==original_num){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not a Armstrong Number";
    }
    return 0;
}