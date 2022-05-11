//  Kashish Ahuja
//  Compile time polymorphism
//  Program for function overloading using example of area of shapes

#include<iostream>
using namespace std;

class Shape
{   
    public: 
        void area(float rad)
        {
            cout<<"\nArea of circle is "<<3.14*rad*rad;
        }

        void area(float length, float width)
        {
            cout<<"\nArea of rectangle is "<<length*width;
        }

        void area()
        {
            int base, height;
            cout<<"\nEnter base and height of triangle: ";
            cin>>base>>height;
            cout<<"\nArea of triangle is "<<0.5*base*height;
        }        

};

int main()
{
    Shape s;
    s.area();
    s.area(4.5);
    s.area(2.5, 6.6);
    return 0;
}





