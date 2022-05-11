//  Kashish Ahuja
//  Program for static member function

#include<iostream>
using namespace std;

class Counter
{
    private:
        static int count;
    
    public:
        void setdata(int cnt)
        {
            count=cnt;
        }

        static void showdata()
        {
            cout<<endl<<count;
        }
};

int Counter :: count=10;

int main()
{
    Counter c1, c2, c3;
    c1.setdata(10);
    c1.showdata();
    c2.setdata(20);
    c2.showdata();
    c3.setdata(30);
    c3.showdata();
    c1.showdata();
    return 0;
}