//  Kashish Ahuja
//  Program for single inheritance using constructors

#include<iostream>
using namespace std;
#include<string.h>

class Company
{
    private:
        int regno;
        char cmpname[20];

    public: 
        Company(){}

        Company(int regno, char cmpname[])
        {
            this->regno=regno;
            strcpy(this->cmpname,cmpname);
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

        Employee(int empid, char empname[]):Company(12345,"Ahuja")
        {
            this->empid=empid;
            strcpy(this->empname,empname);
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
    Employee e(123,"Kashish");
    e.showdata();
    return 0;
}