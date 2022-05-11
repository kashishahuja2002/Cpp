//  Kashish Ahuja
//  Progrsm for built-in classes and functions for file in c++

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream write;
    char data[200];
    cout<<"Enter data to be written in file: ";
    cin.get(data,200);
    write.open("Kashish");
    write<<data;
    write.close();
    cout<<"\nData is saved in file.";

    ifstream read;
    read.open("Kashish");
    cout<<"\n";
    while(!read.eof())
    {
        read.getline(data, 200);
        cout<<data;
    }   
    read.close();
    return 0;
}