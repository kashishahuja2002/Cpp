//  Kashish Ahuja
//  Program for static data member

#include<iostream>
using namespace std;

class Demo
{
    private:
        static int count;
        int rollno;
    
    public:
        void getdata()
        {
            count++;
            rollno=count;
        }

        void showdata()
        {
            cout<<endl<<rollno;
        }
};

int Demo :: count=10;

int main()
{
    Demo d[5];
    for(int i=0; i<5; i++)
        d[i].getdata();
    for(int i=0; i<5; i++)
        d[i].showdata();  
    return 0;
}