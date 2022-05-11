//  Kashish Ahuja
//  Program for finding factorial using recursion (without using loop)

#include<iostream>
using namespace std;

int factorial(int num, int fact)
{
    if(num==1)
        return fact;
    else 
    {
        fact=fact*num;
        num--;
        factorial(num, fact);
    }
}

int main()
{
    int num, fact=1;
    cout<<"Enter a number: ";
    cin>>num;
    fact=factorial(num, fact);
    cout<<"Factorial of "<<num<<" is "<<fact;
    return 0;
}
