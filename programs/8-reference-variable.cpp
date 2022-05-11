//  Kashish Ahuja
//  Program for reference variable

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    int &ref=num;   //  reference num to ref
    cout<<endl<<num<<endl<<ref;    
    ref=20;
    cout<<endl<<num<<endl<<ref;     //  when we change value of one variable, another one also gets changed
    return 0;
}