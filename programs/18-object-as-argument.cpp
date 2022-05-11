//  Kashish Ahuja
//  Program for passing object as an argument 

#include<iostream>
using namespace std;

class Demo
{
    private:
        int a, b;
        float c;
    
    public:
        void getdata()
        {
            cout<<"\nEnter values of a, b, and c: ";
            cin>>a>>b>>c;
        }

        void sum(Demo d1, Demo d2)
        {
            a=d1.a+d2.a;
            b=d1.b+d2.b;
            c=d1.c+d2.c;
        }

        void showdata()
        {
            cout<<"\na: "<<a;
            cout<<"\nb: "<<b;
            cout<<"\nc: "<<c;
        } 
};

int main()
{
    Demo d1, d2, d3;
    d1.getdata();
    d2.getdata();
    d3.sum(d1, d2);
    d3.showdata();
    return 0;
}