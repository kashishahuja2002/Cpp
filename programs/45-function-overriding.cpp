//  Kashish Ahuja
//  Run time polymorphism
//  Program for function overriding

//  Either pointer or reference only one will run at a time 

#include<iostream>
using namespace std;

class A
{
    public:
        virtual void show()
        {
            cout<<"\nA";
        }
};

class B : public A
{
    public:
        void show()         //  function overriding
        {
            cout<<"\nB";
        }
};

class C : public A
{
    public:
        void show()         //  function overriding
        {
            cout<<"\nC";
        }
};

int main()
{
    //  by pointer
    A a, *p;
    p=&a;
    p->show();
    B b;
    p=&b;
    p->show();
    C c;
    p=&c;
    p->show();

    //  by reference
    // A a;
    // B b;
    // A &p=a;
    // p.show();

    return 0;
}