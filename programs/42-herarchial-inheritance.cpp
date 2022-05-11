//  Kashish Ahuja
//  Program for herarchial inheritance

#include<iostream>
using namespace std;

class College
{
    private:
        int regno;
        char clgname[10];

    public:
        void get()
        {
            cout<<"\nEnter college's registration number: ";
            cin>>regno;
            cout<<"Enter college's name: ";
            cin>>clgname;
        }

        void show()
        {
            cout<<"\nCollege's registration number: "<<regno;
            cout<<"\nCollege's name: "<<clgname;
        }
};

class MBA : public College
{
    private:
        int mbafacultyno, mbastudentno;

    public:

        void get()
        {
            cout<<"\nEnter number of faculties in MBA: ";
            cin>>mbafacultyno;
            cout<<"Enter number of students in MBA: ";
            cin>>mbastudentno;
        }

        void show()
        {
            cout<<"\n\nNumber of faculties in MBA: "<<mbafacultyno;
            cout<<"\nNumber of students in MBA: "<<mbastudentno;
        }
};

class MCA : public College
{
    private:
        int mcafacultyno, mcastudentno;

    public:

        void get()
        {
            cout<<"\nEnter number of faculties in MCA: ";
            cin>>mcafacultyno;
            cout<<"Enter number of students in MCA: ";
            cin>>mcastudentno;
        }

        void show()
        {
            cout<<"\n\nNumber of faculties in MCA: "<<mcafacultyno;
            cout<<"\nNumber of students in MCA: "<<mcastudentno;
        }
};

class Mtech : public College
{
    private:
        int mtechfacultyno, mtechstudentno;

    public:

        void get()
        {
            cout<<"\nEnter number of faculties in M.Tech: ";
            cin>>mtechfacultyno;
            cout<<"Enter number of students in M.Tech: ";
            cin>>mtechstudentno;
        }

        void show()
        {
            cout<<"\n\nNumber of faculties in M.Tech: "<<mtechfacultyno;
            cout<<"\nNumber of students in M.Tech: "<<mtechstudentno;
        }
};

int main()
{
    College clg;
    MBA mba;
    MCA mca;
    Mtech mtech;

    clg.get();
    mba.get();
    mca.get();
    mtech.get();

    clg.show();
    mba.show();
    mca.show();
    mtech.show();

    return 0; 
}