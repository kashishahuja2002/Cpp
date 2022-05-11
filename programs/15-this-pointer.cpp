//  Kashish Ahuja
//  Program for this pointer

//  In program 14, we got garbage value because we assigned local variable of the same name to global variable, so we will use this pointer to specify global variable, and we will get correct value, not garbage value

#include<iostream>
using namespace std;
#include<string.h>

class Company
{
    private:
        int regno, empno;
        char name[20], city[10], address[50];
        long long int contact;
    
    public:
        void setdata(int regno, char name[], char city[], char address[], long long int contact, int empno)
        {
            this->regno=regno;
            strcpy(this->name, name);
            strcpy(this->city, city);
            strcpy(this->address, address);
            this->contact=contact;
            this->empno=empno;
        }

        void showdata()
        {
            cout<<"\nRegistration no.: "<<regno;
            cout<<"\nCompany name: "<<name;
            cout<<"\nCity: "<<city;
            cout<<"\nAddress: "<<address;
            cout<<"\nContact no.: "<<contact;
            cout<<"\nNo. of employees: "<<empno;
        } 
};

int main()
{
    Company cmp;
    cmp.setdata(12345, "kashish", "Indore", "Kirpal Cottage, F-13, Ratlam Kothi", 8959533301, 1500);
    cmp.showdata();
    return 0;
}