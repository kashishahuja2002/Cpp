//  Kashish Ahuja
//  Program for dynamic memory allocation using new and delete

#include<iostream>
using namespace std;

int main()
{
    int *p, *q;
    p = new int;
    q = new int;
    cout<<"Enter two numbers: ";
    cin>>*p>>*q;
    int sum=*p+*q;
    cout<<"Sum: "<<sum;
    delete p;
    delete q;

    cout<<"\n\nEnter number of elements in array: ";
    int n; cin>>n;
    int *ptr;
    ptr=new int [n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++)
        cin>>ptr[i];
    cout<<"Array elements are: ";
    for(int i=0; i<n; i++)
        cout<<ptr[i]<<" ";
    delete ptr;

    return 0;
}