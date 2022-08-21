#include<iostream>
using namespace std;
int main(){
    int n,arr[10],i,sum=0,product=1;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    cout<<"Enter elements of an array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        product=product*arr[i];
    }
    cout<<"Sum of array elements: "<<sum<<endl;
    cout<<"Product of array elements: "<<product<<endl;
    return 0;
}