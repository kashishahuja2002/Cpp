//  Kashish Ahuja
//  Program for multi level inheritance

#include<iostream>
using namespace std;

class Student
{
    private:
        int rollno;
        char name[10];

    public:
        void get()
        {
            cout<<"\nEnter student's roll number: ";
            cin>>rollno;
            cout<<"Enter student's name: ";
            cin>>name;
        }

        void show()
        {
            cout<<"\nStudent's roll number: "<<rollno;
            cout<<"\nStudent's name: "<<name;
        }

};

class Marks : public Student
{
    protected:
        int marks[5];

    public:
        void get()
        {
            Student::get();
            cout<<"Enter student's marks for 5 subjects: ";
            for(int i=0;i<5; i++)
                cin>>marks[i];
        }

        void show()
        {
            Student::show();
            cout<<"\nStudent's marks are: ";
            for(int i=0;i<5; i++)
                cout<<marks[i]<<" ";
        }
};

class Result : public Marks
{
    private:
        int total=0;
        float percentage;
        char grade;

    public:
        void process()
        {
            Marks::get();
            for(int i=0;i<5; i++)
                total=total+marks[i];
            
            percentage=total/5.0;

            if(percentage>=0.0 && percentage<=100.0)
            {
                if(percentage>90.0)
                    grade='A';
                else if(percentage>75.0)
                    grade='B';
                else if(percentage>60.0)
                    grade='C';
                else if(percentage>45.0)
                    grade='D';
                else if(percentage>30.0)
                    grade='E';
                else
                    grade='F';
            }
        }

        void show()
        {
            Marks::show();
            cout<<"\nTotal marks: "<<total;
            cout<<"\nPercentage: "<<percentage<<"%";
            cout<<"\nGrade: "<<grade;
        }
};

int main()
{
    Result r;
    r.process();
    r.show();
    return 0;
}