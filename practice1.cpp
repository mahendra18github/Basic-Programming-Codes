//Processing a Shopping List
#include<iostream>
using namespace std;
const m=50;
class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void){count=0;} //initializes count to 0
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
//================================
void ITEMS :: getitem(void) //assign values to data members of item
 {
     cout<<"Enter item code :";
     cin>>itemCode[count];
     cout<<"Enter item cost :";
     cin>>itemPrice[count];
     count++;
 }
 void ITEMS :: displaySum(void) //display total value of all items
 {
     float sum=0;
     for(int i=0;i<count;i++)
        sum=sum+itemPrice[i];
     cout<<"\nTotal value:"<<sum<<"\n";
 }
 void ITEMS :: remove(void)  //delete a specified item
 {
     int a;
     cout<<"Enter item code :";
     cin>>a;
     for(int i=0;i<count;i++)
        if(itemCode[i]==a)
        itemPrice[i]=0;
 }
void ITEMS :: displayItems(void)  //displaying ITEMS
{
    cout<<"\nCode Price\n";
    for(int i=0;i<count;i++)
    {
        count<<"\n"<<itemCode[i];
        cout<<" "<<itemPrice[i];
    }
    cout<<"\n";
}
//===================================
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout<<"\nYou can do the following";
            <<"Enter appropriate number\n";
        cout<<"\n1: Add an item";
        cout<<"\n2: Display total value";
        cout<<"\n3: Delete an item";
        cout<<"\n4: Display all items";
        cout<<"\n5: Quit";
        cout<<"\n\nWhat is your option?";

        cin>>x;

        switch(x)
        {
            case1 : order.getitem(); break;
            case2 : order.displaySum(); break;
            case3 : order.remove(); break;
            case4 : order.displayItems(); break;
            case5 : break;
            default : cout<<"Error in input; try again\n";
        }
    }
    while(x!=5);     //do...while ends
    return 0;
}
