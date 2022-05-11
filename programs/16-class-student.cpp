//  Kashish Ahuja
//  Program for class of student

#include<iostream>
using namespace std;

class Student
{
    private:
        int rollno, year, sem, marks[5], total=0;
        char name[20], college[10], branch[10], dob[11], gender, city[10], address[50], subject[5][10], grade;
        long long int contact;
        float percentage;

    public: 
        void getdata()
        {
            cout<<"\nEnter roll no.: ";
            cin>>rollno;
            cout<<"Enter student's name: ";
            cin.get();  //  Otherwise enter will be stored in cin.get instead of taking input
            cin.get(name,20);
            cout<<"Enter college's name: ";
            cin.get();
            cin.get(college,10);
            cout<<"Enter branch: ";
            cin>>branch;
            cout<<"Enter year: ";
            cin>>year;
            cout<<"Enter semester: ";
            cin>>sem;
            cout<<"Enter date of birth: ";
            cin>>dob;
            cout<<"Enter gender (M/F/O): ";
            cin>>gender;
            cout<<"Enter contact: ";
            cin>>contact;
            cout<<"Enter city: ";
            cin.get();
            cin.get(city,10);
            cout<<"Enter address: ";
            cin.get();
            cin.get(address,50);
            cout<<"Enter subjects: ";
            for(int i=0; i<5; i++)
                cin>>subject[i];
            cout<<"Enter marks: ";
            for(int i=0; i<5; i++)
                cin>>marks[i];
        }

        void cal()
        {
            for(int i=0; i<5; i++)
                total=total+marks[i];
            
            percentage = total/5;
        }

        void grd()
        {
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

        void showdata()
        {
            cout<<"\nRoll no.: "<<rollno;
            cout<<"\nStudent's name: "<<name;
            cout<<"\nCollege's name: "<<college;
            cout<<"\nBranch: "<<branch;
            cout<<"\nYear: "<<year;
            cout<<"\nSemester: "<<sem;
            cout<<"\nDate of birth: "<<dob;
            cout<<"\nGender: "<<gender;
            cout<<"\nContact no.: "<<contact;
            cout<<"\nCity: "<<city;
            cout<<"\nAddress: "<<address;
            cout<<"\nSubjects: \n";
            for(int i=0; i<5; i++)
                cout<<subject[i]<<" ";
            cout<<"\nMarks: \n";
            for(int i=0; i<5; i++)
                cout<<marks[i]<<" ";
            cout<<"\nTotal: "<<total;
            cout<<"\nPercentage: "<<percentage;
            cout<<"\nGrade: "<<grade;
        }
};

int main()
{
    Student s;
    s.getdata();
    s.cal();
    s.grd();
    s.showdata();
    return 0;
}