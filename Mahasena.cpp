#include<iostream>
using namespace std;
int main(){
    int soldieres;
    cin>>soldieres;
    int evencount=0;
    int oddcount=0;
    for (int idx=0;idx<soldieres;idx++){

        int weapons;
        cin>>weapons;
        if(weapons&1){
            oddcount++;
        }else
        {
                evencount++;
            }
        
        if(evencount>oddcount){
            cout<<"READY FOR BATTLE";
            }
        else{
            cout<<"NOT READY FOR BATTLE";
        }
    }
    return 0;
}