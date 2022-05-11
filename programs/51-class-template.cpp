//  Kashish Ahuja
//  Progrsm for class template

#include<iostream>
using namespace std;

template <class t1, class t2, class t3>
class Demo
{
    private:
        t1 a;
        t2 b,c;
        t3 d;

    public: 
        Demo(t1 a, t2 b, t2 c)
        {
            this->a=a;
            this->b=b;
            this->c=c;
        }

        void sum()
        {
            d=a+b+c;
            cout<<endl<<d;
        }
};

int main()
{
    Demo<int, int, int>d1(4, 1, 6);
    d1.sum();
    Demo<float, float, float>d2(4.1, 2.0, 6.1);
    d2.sum();
    return 0;
}