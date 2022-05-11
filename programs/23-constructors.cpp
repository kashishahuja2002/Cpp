//  Kashish Ahuja
//  Program for constructors

#include<iostream>
using namespace std;
#include<string.h>

class Demo
{
    private:
        int a, b;
        float c;   
        char d[10];

    public:
        Demo()      //  Default Contructor
        {
            a=5;
            b=7;
            c=9.5;
            strcpy(d,"name");
        }

        Demo(int a, int b, float c, char d[])       //  Parameterized Contructor
        {
            this->a=a;
            this->b=b;
            this->c=c;
            strcpy(this->d,d);
        }

        Demo(Demo &d)       //  Copy Contructor
        {
            a=d.a;
            b=d.b;
        }

        void getdata()
        {
            cout<<"\nc: ";
            cin>>c;
            cout<<"d: ";
            cin.get();
            cin.get(d,10);
        }

        void showdata()
        {
            cout<<"\n\na = "<<a;
            cout<<"\nb = "<<b;
            cout<<"\nc = "<<c;
            cout<<"\nd = "<<d;
        }
};

int main()
{
    Demo d1;        //  Default Contructor
    Demo d2(1, 2, 3.4, "kash");         //  Parameterized Contructor
    Demo d3(d2);        //  Copy Contructor
    d3.getdata();
    d1.showdata();
    d2.showdata();
    d3.showdata();
    return 0;
}