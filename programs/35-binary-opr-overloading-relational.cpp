//  Kashish Ahuja
//  Compile time polymorphism
//  Operator overloading
//  Program for binary operator overloading of relational operators for comparing two objects

#include<iostream>
using namespace std;

class Relational
{
    private:
        int marks[5], total=0;
    
    public:
        void getdata()
        {
            for(int i=0; i<5; i++)
                cin>>marks[i];
            calculate();
        }

        void calculate()
        {
            for(int i=0; i<5; i++)
                total=total+marks[i];
        }

        int operator >(Relational &obj)        
        {
            if(total>obj.total)
                return 1;
            else 
                return 0;
        }

        friend int operator <(Relational &obj1, Relational &obj2)        
        {
            if(obj1.total<obj2.total)
                return 1;
            else 
                return 0;
        }
};

int main()
{
    Relational r1, r2;
    int cmp;
    
    cout<<"Enter marks of 5 subjects for r1: ";
    r1.getdata();
    cout<<"Enter marks of 5 subjects for r2: ";
    r2.getdata();

    if(r1>r2)
        cout<<"\nTotal marks of r1 is greater than r2";
    else if(r1<r2)
        cout<<"\nTotal marks of r2 is greater than r1";
    else
        cout<<"\nTotal marks of both students are equal";

    return 0;
}