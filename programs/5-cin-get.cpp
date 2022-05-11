//  Kashish Ahuja
//  Program for cin.get() function

#include<iostream>
using namespace std;

int main()
{
    char str[20];
    cout<<"Enter a string: ";
    cin>>str;   //  Don't take space
    cout<<"String: "<<str;
    fflush(stdin);
    // cin.get();      //  Otherwise enter will be stored in cin.get instead of taking input
    cout<<"\n\nEnter a string: ";
    cin.get(str,20);   //  Don't take space
    cout<<"String: "<<str;
    return 0;
}