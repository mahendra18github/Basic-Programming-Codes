#include<iostream>
using namespace std;

int main(){
    int pocketMoney=3000;
    for(int date=1;date<=30;date++){

            if(date%2==0){
                continue;//continue statement is used to skip current iteration and move on to next iteration.
            }
            if(pocketMoney==0){
                break;//break statement is used to terminate the loop.
            }
        cout<<"Go out today!"<<endl;
        pocketMoney=pocketMoney-300;
    }
return 0;
}
