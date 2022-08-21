#include <bits/stdc++.h>
using namespace std;
/*Evaluation of sin(x) series*/
float numerator(float,int);
float denominator(int);

int main(){
    float x,n,d,term,sum,oldsum;
    int i,j;
    cout<<"Enter the number x:"<<endl;
    cin>>x;
    i=j=1;
    sum=0;
    while(1){
        n=numerator(x,j);
        d=denominator(j);
        term=n/d;
        oldsum=sum;
        (i%2==0)?sum=sum-term:(sum=sum+term);
        if(abs(sum-oldsum)<0.00001)
            break;
            i++;
            j+=2;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}
/*Calculate Power*/
float numerator(float y, int j)
{
    float k=1;
    int m;
    for(m=1;m<=j;m++){
        k*=y;
    }
    return (k);
}
/*Calculate Factorial*/
float denominator(int j){
    int m;
    float h=1;
    for(m=1;m<=j;m++){
        h=h*m;
    }
    return(h);
}