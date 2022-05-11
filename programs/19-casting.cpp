//  Kashish Ahuja
//  Program for casting (type conversion)

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    cout<<"ASCII value of "<<ch<<" is "<<(int)ch;
    int num;
    cout<<"\n\nEnter a number: ";
    cin>>num;
    cout<<"Character corresponding to ASCII value "<<num<<" is "<<(char)num;
    return 0;
}