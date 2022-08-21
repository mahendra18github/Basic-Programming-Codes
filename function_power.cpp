#include<iostream>
using namespace std;

float power(float,int);
int main(){
    float x,pow;
    int y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    pow=power(x,y);
    cout<<x<<" to the power "<<y<<" = "<<pow<<endl;
    return 0;
}

float power(float x, int y){
    float p=1;
    for(int i=1;i<=y;i++){
        p=p*x;
    }
    return(p);
}
