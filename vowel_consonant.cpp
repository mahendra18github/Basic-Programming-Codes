//Write a program to find whether an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;

int main(){

char c;
cout<<"Enter an alphabet: ";
cin>>c;

switch(c)
{
case 'a':
    cout<<"It is an alphabet"<<endl;
    break;
case 'e':
    cout<<"It is an alphabet"<<endl;
    break;
case 'i':
    cout<<"It is an alphabet"<<endl;
    break;
case 'o':
    cout<<"It is an alphabet"<<endl;
    break;
case 'u':
    cout<<"It is an alphabet"<<endl;
    break;
default:
    cout<<"It is a consonant"<<endl;
    break;
}

return 0;
}
