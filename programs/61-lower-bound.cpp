//  Kashish Ahuja
//  Program for using lower_bound() function

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    cout<<"Enter number of elements in vector: ";
    int n; cin>>n;
    vector<int>v;
    cout<<"Enter elements of vector: ";
    for(int i=0; i<n; i++)
    {
        int num; cin>>num;
        v.push_back(num);
    }
    
    cout<<"Enter number of elements whose lower_bound has to be searched: ";
    int q; cin>>q;
    int qrr[q];
    cout<<"Enter elements whose lower_bound has to be searched: ";
    for(int j=0; j<q; j++)
        cin>>qrr[j];

    vector<int>::iterator lower;
    for(int x=0; x<q; x++)
    {
        int flag=0, low=0, high=n, mid;
        
        while(low<=high) 
        {
            mid = (low+high)/2;
            if(qrr[x]==v[mid]) 
            {
                flag=1;
                break;
            }
            else if(qrr[x]<v[mid]) 
                high=mid-1;
            else 
                low=mid+1;
        }
        
        if(flag==1)
        {
            lower = lower_bound(v.begin(), v.end(), qrr[x]);
                cout <<"\n\n"<<qrr[x]<<" is present in vector. \nIt's lower_bound is at index: "
                    << (lower - v.begin()) << endl;    
        }
        else
        {
            lower = lower_bound(v.begin(), v.end(), qrr[x]);
            cout <<"\n\n"<<qrr[x]<<" is not present in vector. \nIt's lower_bound is at index: "
                << (lower - v.begin()) << endl; 
        }
    }

    return 0;
}
