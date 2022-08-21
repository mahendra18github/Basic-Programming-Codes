#include<iostream>
using namespace std;

int main()
{
    int savings;
    cin>>savings;

    if(savings>5000){
            if(savings>10000){
                cout<<"virat is best in world\n";
               } else{
                      cout<<"virat is best in india\n";
                }

    }else if(savings>2000){
    cout<<"rohit\n";
    }else{
    cout<<"Dhoni\n";
    }
    return 0;
}
