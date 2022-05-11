//  Kashish Ahuja
//  Program for exception handling 

#include<iostream>
using namespace std;

int main()
{
    int a, b, div;
    cout<<"\nEnter values of a and b: ";
    cin>>a>>b;
    try
    {
        div=a/b;
    }
    catch(int b)
    {
        cout<<"b=0";
        div=0;
    }
    cout<<endl<<div;
    return 0;
}