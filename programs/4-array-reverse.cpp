//  Kashish Ahuja
//  Program to reverse an array without using another array

#include<iostream>
using namespace std;

int main()
{
    int arr[20];
    cout<<"Enter number of elements in array: ";
    int n;
    cin>>n;
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<n/2; j++)
    {
        int temp;
        temp=arr[j];
        arr[j]=arr[n-1-j];
        arr[n-1-j]=temp;
    }
    cout<<"\n\nReversed array: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}