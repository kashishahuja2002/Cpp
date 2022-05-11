//  Kashish Ahuja
//  Program for class of company by setter method

//  We will get garbage values in this program

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
            regno=regno;
            strcpy(name, name);
            strcpy(city, city);
            strcpy(address, address);
            contact=contact;
            empno=empno;
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
    cmp.setdata(12345, "kashish", "Indore", "F-13 Ratlam Kothi", 8959533301, 1500);
    cmp.showdata();
    return 0;
}