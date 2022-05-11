//  Kashish Ahuja
//  Program for hybrid inheritance and virtual keyword

//  error reference to 'a' is ambigious
//  A::a    A::a
//  Therefore, use virtual keyword before access specifier

#include<iostream>
using namespace std;

class A
{
    protected:
        int a;

    public:
        A()
        {
            a=10;
        }
};

class B : virtual public A
{
    protected:
        int b;

    public:
        B()
        {
            b=20;
        }
};

class C : virtual public A
{
    protected:
        int c;

    public:
        C()
        {
            c=30;
        }
};

class D : public B, public C
{
    private:
        int d;

    public:
        D()
        {
            d=40;
        }

        void sum()
        {
            cout<<"Sum is "<<a+b+c+d;
        }
};

int main()
{
    D d;
    d.sum();
    return 0;
}