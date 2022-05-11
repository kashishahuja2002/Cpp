//  Kashish Ahuja
//  Program for friend function common to many classes

#include<iostream>
using namespace std;

class B;
class A
{
    private:
        int a, b;
    
    public:
    
        void getdata()
        {
            cout<<"Enter a and b: ";
            cin>>a>>b;
        }

        friend void sum(A,B);       //  Can be declared in public section 
};

class B
{
    private:
        int p, q;
        friend void sum(A,B);       //  Can be declared in private section 
    
    public:
        void getdata()
        {
            cout<<"Enter p and q: ";
            cin>>p>>q;
        }
};

void sum(A obj1, B obj2)
{
    cout<<"\nSum1="<<obj1.a+obj2.p;
    cout<<"\nSum2="<<obj1.b+obj2.q;
}

int main()
{
    class A a;
    class B b;
    a.getdata();
    b.getdata();
    sum(a,b);       
    return 0;
}