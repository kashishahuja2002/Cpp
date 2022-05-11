//  Kashish Ahuja
//  Program for class of company by getter method

#include<iostream>
using namespace std;

class Company
{
    private:
        int regno, empno;
        char name[20], city[10], address[30];
        long long int contact;
    
    public:
        void getdata()
        {
            cout<<"\nEnter registration no.: ";
            cin>>regno;
            cout<<"Enter company name: ";
            cin>>name;
            cout<<"Enter city name: ";
            cin>>city;
            cout<<"Enter address: ";
            cin>>address;
            cout<<"Enter contact no.: ";
            cin>>contact;
            cout<<"Enter number of employees: ";
            cin>>empno;
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
    cmp.getdata();
    cmp.showdata();
    return 0;
}