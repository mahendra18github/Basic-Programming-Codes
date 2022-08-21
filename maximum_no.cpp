#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;

  if(a>b){
    if(a>c){
        cout<<"the maximum number is: "a<<endl;
    }
    else{
        cout<<"the maximum number is: "c<<endl;
    }
  }
  else{
    if(b>c){
        cout<<"the maximum number is: "b<<endl;
    }
    else{
        cout<<"the maximum number is: "c<<endl;
    }
  }
  return 0;
}
