//  Kashish Ahuja
//  Program for inline function

#include<iostream>
using namespace std;

inline int square(int a)
{
    return a*=a;
}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Square of "<<num<<" is "<<square(num);
    return 0;
}