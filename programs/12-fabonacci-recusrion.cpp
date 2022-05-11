//  Kashish Ahuja
//  Program for fabonacci series using recursion (without using loop)

#include<iostream>
using namespace std;

int fabonacci(int i, int a, int b, int num)
{
    int fab;
    if(i>num)
        return 0;
    else
    {
        fab=a+b;
        cout<<fab<<" ";
        a=b;
        b=fab;
        i++;
        fabonacci(i,a,b,num);
    }
}

int main()
{
    int num, a=1, b=2, fab, i=3;
    cout<<"Enter how many numbers of fabonacci series you want: ";
    cin>>num;
    cout<<"\nFabonacci series: "<<a<<" "<<b<<" ";
    fabonacci(i, a, b, num);
    return 0;
}
