//  Kashish Ahuja
//  Program for default argument

#include<iostream>
using namespace std;

void sum(int a=1, int b=2, int c=3, int d=4)
{
    int e;
    e=a+b+c+d;
    cout<<"\nSum is "<<e;
}

int main()
{
    sum(5,6,7,8);
    sum(5,6,7);
    sum(5,6);
    sum(5);
    sum();
    return 0;
}