//  Kashish Ahuja
//  Program for operations on vector

//  vector indexing starts from 0

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main() { 
    vector<int>v;                   //  declaration
    cout<<"Enter number of elements in vector: ";
    int n;
    cin>>n;

    cout<<"Enter elements of vector: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);                             //  initialisation (pushing)
    }

    cout<<"Size of vector: "<<v.size();           //  size

    sort(v.begin(), v.end());                       //  sorting
    cout<<"\nSorted vector: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    v.pop_back();                                   //  poping
    cout<<"\nPopped last element from vector: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<"\nEnter position of element to delete: ";    
    int q1;
    cin>>q1;
    v.erase(v.begin()+q1);                          //  erase
    //  q1 position starts from 0, acc to user position starts from 1 (q1-1)
    cout<<"Vector: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
    
    cout<<"\nEnter range of position to delete elements: ";
    int q2, q3;
    cin>>q2>>q3;
    v.erase(v.begin()+(q2), v.begin()+(q3));    //  erase (by range)
    cout<<"Vector: ";
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    return 0;
}





