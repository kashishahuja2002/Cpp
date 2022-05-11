//  Kashish Ahuja
//  Compile time polymorphism
//  Operator overloading
//  Program for unary operator overloading

#include<iostream>
using namespace std;

class Unary
{
    private:
        int x, y, z;
    
    public:
        Unary()
        {
            x=10;
            y=20;
            z=30;
        }

        void operator ++ ()         // member function takes 0 arguments
        {
            x++;
            y++;
            z++;
        }

        friend void operator -- (Unary &obj)         // friend function takes 1 argument
        {
            obj.x--;
            obj.y--;
            obj.z--;
        }

        void showdata()
        {
            cout<<"\nx= "<<x<<"\ty= "<<y<<"\tz= "<<z; 
        }
};

int main()
{
    Unary u;
    ++u;            // calling by member fun
    u.showdata();       
    --(u);          // calling by friend fun
    u.showdata();
    return 0;
}