//  Kashish Ahuja
//  Program for destructor

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
            cout<<"Enter values of a, b, and c: ";
            cin>>a>>b>>c;
        }

        void showdata()
        {
            cout<<"\nValues of a, b, and c are: "<<a<<" "<<b<<" "<<c;
        }

        ~Demo()
        {
            cout<<"\nMemory is released";
        }
};

int main()
{
    Demo d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.getdata();
    d1.showdata();
    d2.showdata();
    d3.showdata();
    cout<<endl;
    return 0;
}
