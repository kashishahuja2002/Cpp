//  Kashish Ahuja
//  Compile time polymorphism
//  Program for function overloading using example of swapping

// float also take integers, therefore ambiguity

#include<iostream>
using namespace std;
#include<string.h>

class Swapping
{
    public: 
        void swap(int a, int b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
            cout<<"\n\nIntegers after swapping are: "<<a<<" and "<<b;
        }

        void swap(double a, double b)
        {
            double temp;
            temp=a;
            a=b;
            b=temp;
            cout<<"\n\ndoubles after swapping are: "<<a<<" and "<<b;
        }

        void swap(char a, char b)
        {
            char temp;
            temp=a;
            a=b;
            b=temp;
            cout<<"\n\nCharacters after swapping are: "<<a<<" and "<<b;
        }

        void swap(int a[], int b[])
        {
            int temp[5];
            for(int i=0; i<5; i++)
            {
                temp[i]=a[i];
                a[i]=b[i];
                b[i]=temp[i];
            }
            
            cout<<"\n\nArrays after swapping are: ";
            cout<<"\narr_a: ";
            for(int i=0; i<5; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\narr_b: ";
            for(int i=0; i<5; i++)
            {
                cout<<b[i]<<" ";
            }
        }     

        void swap(char a[], char b[])
        {
            char temp[10];
            strcpy(temp,a);
            strcpy(a,b);
            strcpy(b,temp);
            cout<<"\n\nStrings after swapping are: "<<a<<" and "<<b;
        }             

};

int main()
{
    Swapping s;
    s.swap(5,2);
    s.swap(8.4,6.2);
    s.swap('a','k');
    int arr_a[]={1,2,3,4,5};
    int arr_b[]={6,7,8,9,10};
    s.swap(arr_a, arr_b);
    char str_a[]="Hello";
    char str_b[]="World";
    s.swap(str_a, str_b);
    return 0;
}





