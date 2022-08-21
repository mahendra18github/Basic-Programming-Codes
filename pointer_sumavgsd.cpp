/*Function which returns sum,average and standard deviation*/
#include<iostream>
#include<math.h>
using namespace std;
void stats(int*,int*,double*);
int main(){
    int sum,avg;
    double stdev;
    stats(&sum,&avg,&stdev); //Function call by reference
    cout<<"Sum = "<<sum<<endl<<"Average = "<<avg<<endl<<"Standard Deviation = "<<stdev<<endl;
    return 0;
}
void stats(int *sum, int *avg, double *stdev){
    int n1,n2,n3,n4,n5;
    cout<<"Enter 5 numbers: "<<endl;
    cin>>n1>>n2>>n3>>n4>>n5;
    *sum=n1+n2+n3+n4+n5;  //Calculate sum
    *avg=*sum/5; //Calculate average
    /*Calculate standard deviation*/

    *stdev=sqrt((pow((n1-*avg),2.0)+ pow((n2-*avg),2.0)+ pow((n3-*avg),2.0) +pow((n4-*avg),2.0)+pow((n5-*avg),2.0))/4);
}