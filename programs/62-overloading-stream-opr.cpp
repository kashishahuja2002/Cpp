//  Kashish Ahuja
//  Compile time polymorphism
//  Operator overloading
//  Program for overloading stream operators (<< and >>)

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;

    public:
        Complex()
        {}

        Complex(int real, int imag)
        {
            this->real=real;
            this->imag=imag;
        }

        Complex operator + (Complex);
        friend ostream & operator << (ostream &out, Complex &c);
};

Complex Complex :: operator + (Complex c)
{
    Complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return temp;
};

ostream & operator << (ostream &out, Complex &c)
{
    out<<c.real<<" + i"<<c.imag;
    return out;
}

int main()
{
    Complex a(2, 5);
    Complex b(4, 6);
    Complex c;
    c=a+b;
    cout<<"\nComplex 1: "<<a;
    cout<<"\nComplex 2: "<<b;
    cout<<"\nSum: "<<c;
    return 0;
}
