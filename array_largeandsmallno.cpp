#include<iostream>
using namespace std;
int main(){
    int arr[10],n,i,j,temp;
    cout<<"Enter size of an array: "<<endl;
    cin>>n;
    cout<<"Enter elements of an array: "<<endl;
    for(int i;i<n;i++){
        cin>>arr[i];
    }
    for(int i;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
           
        }
    }
        cout << "Second largest number : " << arr[1];
        cout << "\nSecond smallest number : " << arr[n - 2];
        return 0;
}