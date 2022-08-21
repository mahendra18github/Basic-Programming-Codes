#include <bits/stdc++.h>
using namespace std;
/*Function that returns average and percentage*/
void result(int,int,int,float *,float *);
int main(){
    float avg,per;
    int m1,m2,m3;
    cout<<"Enter marks in three subjects: "<<endl;
    cin>>m1>>m2>>m3;
    result(m1,m2,m3,&avg,&per);
    cout<<"Average = "<<avg<<endl<<"Percentage = "<<per<<endl;
    return 0;
}
void result(int m1,int m2, int m3,float *a,float *p){
    *p=*a=(m1+m2+m3)/3.0;
}