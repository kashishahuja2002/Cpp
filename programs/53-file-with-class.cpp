//  Kashish Ahuja
//  Program for built-in functions for file with classes

#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    private:
        int empid;
        char empname[30];

    public:
        void getdata()
        {
            cout<<"\n\nEnter employee id: ";
            cin>>empid;
            cout<<"Enter employee name: ";
            cin>>empname;
        }
        
        void show()
        {
            cout<<"\nEmployee id: "<<empid;
            cout<<"\nEmployee name: "<<empname;
        }
};

int main()
{   
    Employee emp;
    fstream obj;

    obj.open("Ahuja", ios::app);
    int ch=1;
    while(ch==1)
    {
        emp.getdata();
        obj.write((char*) &emp, sizeof(emp));
        cout<<"\nEnter 1 to insert more records: ";
        cin>>ch;
    }
    obj.close();

    obj.open("Ahuja", ios::in);
    // while(!obj.eof())
    // {
    //     obj.read((char*) &emp, sizeof(emp));
    //     emp.show();
    // }
    while(obj.read((char*) &emp, sizeof(emp)))
    {
        emp.show();
    }
    obj.close();

    return 0;
}