//  Kashish Ahuja
//  Program for call by address/pointer

#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    cout<<"\nAfter swapping numbers are: "<<*x<<" and "<<*y;
}

int main()
{
    int a, b;
    cout<<"Enter numbers for swapping: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"\nIn main numbers after swapping are: "<<a<<" and "<<b;   // Value is also swaped outside the function 
    return 0;
}
