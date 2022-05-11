//  Kashish Ahuja
//  Program for friend class

#include<iostream>
using namespace std;

class B;

class A
{
    private:
        int a, b;
    
    public:
        friend class B;       //  B is friend of A 
};

class B
{
    private:
        int p, q;

    public:
        void getdata(A obj)
        {
            cout<<"Enter a and b for class A: ";
            cin>>obj.a>>obj.b;          // can also assign data in A using B
            cout<<"Enter p and q for class B: ";
            cin>>p>>q;
        }

        void showdata(A obj)
        {
            cout<<"Data for class A: ";
            cout<<obj.a<<obj.b;
            cout<<"Data for class B: ";
            cout<<p<<q;
        }
};

int main() 
{
    class A a;
    class B b;
    b.getdata(a);    
    return 0;
}