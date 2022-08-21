#include<iostream>
using namespace std;
int main(){
    int water_lit,water_bill;
    cin>>water_lit;
    
    if(water_lit<100){
         water_bill= water_lit*15;
         cout<<water_bill<<endl;
    }
    else if(water_lit>100 && water_lit<=200){
         water_bill= (100*15)+(water_lit-100)*14;
         cout<<water_bill<<endl;
    }
    else{
         water_bill= (100*15)+(100*14)+(water_lit-200)*12;
         cout<<water_bill<<endl;
    }
return 0;
}