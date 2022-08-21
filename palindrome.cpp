#include<iostream>
using namespace std;
int main(){
    int num,sum=0,rem,temp;
    cin>>num;
    temp=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==temp){
        cout<<"Palindrome Number";
    } 
    else{
        cout<<"Not a Palindrome Number";
    }  
    return 0;
}