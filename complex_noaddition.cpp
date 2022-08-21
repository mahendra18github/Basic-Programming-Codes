#include<iostream>
using namespace std;
class Complex{
    public:
    int real,imag;

    void setvalue(){     //function to set values of real and imag both part of complex number
        cin>>real;
        cin>>imag;
    }
    void display(){     // function to dispaly values
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
    void sum(Complex c1,Complex c2){        //Function to add two complex numbers
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};
int main(){
    Complex c1,c2,c3;
    cout<<"Enter real and imaginary part of first complex number: "<<endl;
    c1.setvalue();
    cout<<"Enter real and imaginary part of first complex number: "<<endl;
    c2.setvalue();
    cout<<"Sum of two complex number is: "<<endl;
    c3.sum(c1,c2);
    c3.display();

    return 0;
}