//  Kashish Ahuja
//  Program to make a calculator using do-while switch

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
        int opr;
        do
        {
                cout<<"\n\n.....CALCULATOR.....";
                cout<<"\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Exit";
                cout<<"\nEnter the operation you want to perform: ";
                cin>>opr;
                int x,y;
                if(opr>=1 && opr<=4)
                {
                        cout<<"Enter two numbers for performing operation: ";
                        cin>>x>>y;
                }
                int result, e=0;
                switch(opr)
                {
                        case 1: result=x+y;
                                break;

                        case 2: result=x-y;
                                break;

                        case 3: result=x*y;
                                break;

                        case 4: result=x/y;
                                break;

                        case 5: exit(0);
                                break;

                        default:        cout<<"Select valid operation.";
                                        e=1;
                                        exit(0);
                }
                if(e==0)
                        cout<<"Result = "<< result;
        } while (opr!=5);
        
        return 0;
} 