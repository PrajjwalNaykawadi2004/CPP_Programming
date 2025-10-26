#include<iostream>
using namespace std;

class Base 
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside Base fun\n";
        }


    
};

class Derived : public Base
{
    public :
        int x;

        void gun()
        {
            cout<<"Inside Derived gun\n";
        }



};

int main()
{
    Base bobj1;
    Derived dobj2;
    
    cout<<"Size of Base class object : "<<sizeof(bobj1)<<"\n";
    cout<<"Size of Derived class object : "<<sizeof(dobj2)<<"\n";

    return 0;
}