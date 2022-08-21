#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class bank
{
    /* data */
    int acno;
    char nm[100],acctype[100];
    float bal;
public:
    bank(int acc_no,char*name,char*acc_type,float balance)//Parameterized Constructor
    {
      acno=acc_no;
      strcpy(nm,name);
      strcpy(acctype,acc_type);
      bal=balance;
    }
    void deposit();
    void withdraw();
    void display();
};
void bank::deposit() //depositing an amount
{
    int dam1;
    cout<<"\nEnter deposit amount=";
    cin>>dam1;
    bal+=dam1;
}

void bank::withdraw() //withdrawing an amount
{
    int wamt1;
    cout<<"\nEnter withdraw amount=";
    cin>>wamt1;
    if(wamt1>bal){
        cout<<"\nYou cannot withdraw amount";
    }
    bal-=wamt1;
}

void bank::display() //displaying the details
{
    cout<<"\n-------------------";
    cout<<"\nAccount No.:"<<acno;
    cout<<"\nName:"<<nm;
    cout<<"\nAccount Type:"<<acctype;
    cout<<"\nBalance:"<<bal;
}
int main()
{
    int acc_no;
    char name[100],acc_type[100];
    float balance;
    cout<<"\nEnter details:\n";
    cout<<"-------------------";
    cout<<"\nAccount No.";
    cin>>acc_no;
    cout<<"\nName";
    cin>>name;
    cout<<"\nAccount Type";
    cin>>acc_type;
    cout<<"\nBalance";
    cin>>balance;

    bank b1(acc_no,name,acc_type,balance); //object is created
    b1.deposit();//
    b1.withdraw();// calling member functions
    b1.display();//
    return 0;
}

