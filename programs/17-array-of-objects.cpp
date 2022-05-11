//  Kashish Ahuja
//  Program for array of objects using class of voter

#include<iostream>
using namespace std;

class Voter
{
    private:
        int id;
        char name[20], dob[11], city[20];
    
    public:
        void getdata()
        {
            cout<<"\nEnter voter id: ";
            cin>>id;
            cout<<"Enter Voter's name: ";
            cin>>name;
            cout<<"Enter city name: ";
            cin>>city;
            cout<<"Enter date of birth: ";
            cin>>dob;
        }

        void showdata()
        {
            cout<<"\n\nVoter id: "<<id;
            cout<<"\nVoter's name: "<<name;
            cout<<"\nCity: "<<city;
            cout<<"\nDate of birth: "<<dob;
        } 
};

int main()
{
    Voter v[10];
    int n;
    cout<<"\nEnter number of voters: ";
    cin>>n;
    for(int i=0; i<n; i++)
        v[i].getdata();
    for(int i=0; i<n; i++)
        v[i].showdata();
    return 0;
}