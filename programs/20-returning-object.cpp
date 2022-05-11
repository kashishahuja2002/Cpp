//  Kashish Ahuja
//  Program for returning an object

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

        Demo sum(Demo d1, Demo d2)
        {
            Demo d3;
            d3.a=d1.a+d2.a;
            d3.b=d1.b+d2.b;
            d3.c=d1.c+d2.c;
            return d3;
        }

        void showdata()
        {
            cout<<"\n\na: "<<a;
            cout<<"\nb: "<<b;
            cout<<"\nc: "<<c;
        } 
};

int main()
{
    Demo d1, d2, d3, d4;
    d1.getdata();
    d2.getdata();
    d4=d3.sum(d1, d2);  
    d3.showdata();      //  no change or assignment in d3, therefore garbage value
    d4.showdata();
    d3=d3.sum(d1, d2);
    d3.showdata();
    return 0;
}