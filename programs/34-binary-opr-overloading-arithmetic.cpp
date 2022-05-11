//  Kashish Ahuja
//  Compile time polymorphism
//  Operator overloading
//  Program for binary operator overloading of arithmetic operators

#include<iostream>
using namespace std;

class Arithmetic
{
    private:
        int x, y;
        float z;
    
    public:
        void getdata()
        {
            cout<<"Enter value x, y, and z: ";
            cin>>x>>y>>z;
        }

        Arithmetic operator +(Arithmetic &obj)         // member function takes 1 argument
        {
            Arithmetic temp;
            temp.x=x+obj.x;
            temp.y=y+obj.y;
            temp.z=z+obj.z;
            return temp;
        }

        Arithmetic operator +(int num)         // member function takes 1 argument
        {
            Arithmetic temp;
            temp.x=x+num;
            temp.y=y+num;
            temp.z=z+num;
            return temp;
        }

        friend Arithmetic operator -(Arithmetic &obj1, int num)        // friend function takes 2 arguments
        {
            Arithmetic temp;
            temp.x=obj1.x-num;
            temp.y=obj1.y-num;
            temp.z=obj1.z-num;
            return temp;
        }

        friend Arithmetic operator -(Arithmetic &obj1, Arithmetic &obj2)        // friend function takes 2 arguments
        {
            Arithmetic temp;
            temp.x=obj1.x-obj2.x;
            temp.y=obj1.y-obj2.y;
            temp.z=obj1.z-obj2.z;
            return temp;
        }

        friend Arithmetic operator -(int num, Arithmetic &obj2)        // friend function takes 2 arguments
        {
            Arithmetic temp;
            temp.x=num-obj2.x;
            temp.y=num-obj2.y;
            temp.z=num-obj2.z;
            return temp;
        }

        void showdata()
        {
            cout<<"\nx= "<<x<<"\ty= "<<y<<"\tz= "<<z; 
        }
};

int main()
{
    Arithmetic a1, a2, a3;
    int num=10;
    a1.getdata();
    a2.getdata();

    // member function
    a3=a1+a2;            // calling by member fun (obj1 + obj2)
    a3.showdata();
    a3=a1+num;          // calling by member fun (obj + var/const)
    a3.showdata();

    // friend function
    a3=a1-a2;           // calling by friend fun (obj1 - obj2)
    a3.showdata();
    a3=a1-num;          // calling by friend fun (obj - var/const)
    a3.showdata();
    a3=num-a2;          // calling by friend fun (var/const - obj)
    a3.showdata();

    return 0;
}