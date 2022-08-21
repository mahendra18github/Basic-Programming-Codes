#include<iostream>
using namespace std;

int add(int n1, int n2){
    int m=n1+n2;
    return m;
}

int main()
{
  
  // function to add two numbers
  int a=5, b=6;
  int sum= add(a,b);
  cout<<sum;

    
    return 0;
}