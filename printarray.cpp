#include<iostream>
using namespace std;
int main(){
    int arr[10],i,n;
    cout<<"Read and print array elements"<<endl;
    cout<<"enter number of elements : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Element " <<i<<":";
        cin>>arr[i];
    }
    cout<<"Elements in an array are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" \n";
    }
    cout<<endl;
    return 0;

}