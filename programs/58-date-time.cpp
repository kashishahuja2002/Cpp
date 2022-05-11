//  Kashish Ahuja
//  Program to display date and time

#include<iostream>
using namespace std;
#include<time.h>

int main()
{
    char date[20], t[20];
    _strdate(date);             //  built-in function
    _strtime(t);                //  built-in function
    cout<<date<<endl<<t;

    time_t t1;                  //  built-in class
    time(&t1);                  //  built-in function
    cout<<endl<<ctime(&t1);     //  built-in function
}