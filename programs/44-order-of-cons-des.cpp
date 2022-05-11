//  Kashish Ahuja
//  Program for order of execution of constructor and destructor

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"\nA's constructor";
        }

        ~A()
        {
            cout<<"\nA's destructor";
        }
};

class B
{
    public:
        B()
        {
            cout<<"\nB's constructor";
        }

        ~B()
        {
            cout<<"\nB's destructor";
        }
};

class C : public B, public A
{
    public:
        C()
        {
            cout<<"\nC's constructor";
        }

        ~C()
        {
            cout<<"\nC's destructor";
        }
};

int main()
{
    C c;
    cout<<endl;
    return 0;
}