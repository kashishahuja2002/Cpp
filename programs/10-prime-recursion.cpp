//  Kashish Ahuja
//  Program for checking prime number using recursion (without using loop)

#include<iostream>
using namespace std;

int isprime(int num, int i)
{
    if(i==1)
        return 1;
    else 
    {
        if(num%i==0)
            return 0;
        else
        {
            i--;
            isprime(num,i);
        }
    }
}

int main()
{
    int num, i, prime;
    cout<<"Enter a number: ";
    cin>>num;
    i=num/2;
    prime=isprime(num,i);
    if(prime==1)
        cout<<endl<<num<<" is prime.";
    else
        cout<<endl<<num<<" is not prime.";
    return 0;
}
