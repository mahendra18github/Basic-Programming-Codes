#include<iostream>
using namespace std;
int main(){
    int arr[10],Count,Max_count=0;
    int a=0;
    while(a<10)
    {
        cout<<"Enter the "<<a+1<<" number : ";
        cin>>arr[a];
        a++;
    }
    a=0;
    while(a<5)
    {
        Count=1;
        int b=a+1;
        while(b<5)
        {
            if(arr[a]==arr[b])
            Count++;
            b++;
        }
        if(Count>Max_count)
        Max_count=Count;
    }
    cout<<Max_count<<endl;
    return 0;
}