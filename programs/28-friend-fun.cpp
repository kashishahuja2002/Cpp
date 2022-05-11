//  Kashish Ahuja
//  Program for friend function

#include<iostream>
using namespace std;

class Demo
{
    private:
        int a;
    
    public:
    
        void getdata()
        {
            cout<<"Enter a: ";
            cin>>a;
        }

        friend void showdata(Demo);
};

void showdata(Demo obj)
{
    cout<<endl<<obj.a;
}

int main()
{
    class Demo d;
    d.getdata();
    showdata(d);
    return 0;
}