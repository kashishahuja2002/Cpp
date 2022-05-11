//  Kashish Ahuja
//  Program for call by value

#include<iostream>
using namespace std;

void square(int a)
{
    a=a*a;
    cout<<endl<<a;
}

int main()
{
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    square(num);
    cout<<endl<<num;    //  no changes in the value of num
    return 0;
}