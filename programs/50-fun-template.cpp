//  Kashish Ahuja
//  Progrsm for function template

#include<iostream>
using namespace std;

template<class t1, class t2>
void sum(t1 a, t2 b)
{
    t1 sum;
    sum=a+b;
    cout<<endl<<sum;
}

int main()
{
    sum(1, 2);          //  int + int
    sum(4.1, 2.3);      //  float + float
    sum('a', 'x');      //  char + char
    sum(1, 4.5);        //  int + float
    sum(5, 'x');        //  int + char
    sum(1.2, 5);        //  float + int
    sum(2.1, 'x');      //  float + char
    sum('x', 4);        //  char + int
    sum('r', 3.1);      //  char + float
    return 0;
}

