#include<iostream>
using namespace std;
//sum of n numbers
int main(){
int n;
cin>>n;

int sum=0;
for(int counter=1;counter<=n;counter++){
    //initialization,condition,increment
    sum=sum+counter;
}
cout<<sum<<endl;
return 0;
}
