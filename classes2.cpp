#include<iostream>
using namespace std;
class stm
{
    static int a;
    int number;
    public:
    void increament(int b)
    {
        number=b;
        a++;
    }
    void show(void)
    {
        cout<<a<<endl;
    }
};
int stm :: a;
int main(){
    stm st1,st2,st3;
    st1.increament(50);
    st2.show();
    st3.show();
    return 0;
}