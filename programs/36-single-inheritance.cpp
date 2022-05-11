//  Kashish Ahuja
//  Program for single inheritance

#include<iostream>
using namespace std;

class Company
{
    private:
        int regno;
        char cmpname[20];

    public: 
        void get()
        {
            cout<<"\nEnter company's registration number: ";
            cin>>regno;
            cout<<"Enter company's name: ";
            cin>>cmpname;
        }

        void show()
        {
            cout<<"\nCompany's registration number: "<<regno;
            cout<<"\nCompany's name: "<<cmpname;
        }
};

class Employee : public Company
{
    private:
        int empid;
        char empname[20];

    public: 
        void getdata()
        {
            Company::get();
            cout<<"Enter employee's id: ";
            cin>>empid;
            cout<<"Enter employee's name: ";
            cin>>empname;
        }

        void showdata()
        {
            Company::show();
            cout<<"\nEmployee's id: "<<empid;
            cout<<"\nEmployee's name: "<<empname;
        }
};

int main()
{
    Employee e;
    e.getdata();
    e.showdata();
    return 0;
}