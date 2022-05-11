//  Kashish Ahuja
//  Progrsm for file with classes for student class

#include<iostream>
#include<fstream>
using namespace std;
#include<string.h>

class Student
{
    private:
    
        static int grdcnt;
        int rollno, year, sem, marks[5], total=0;
        char name[20], college[10], branch[10], dob[11], gender, city[10], address[50], subject[5][10], grade;
        long long int contact;
        float percentage;

    public: 

        Student()
        { }

        Student(char college[], char branch[], int year, int sem, char subject[5][10])
        {
            strcpy(this->college,college);
            strcpy(this->branch,branch);
            this->year=year;
            this->sem=sem;
            for(int i=0; i<5; i++)
                strcpy(this->subject[i],subject[i]);
        }

        Student(Student &s)
        {
            strcpy(college,s.college);
            strcpy(branch,s.branch);
            year=s.year;
            sem=s.sem;
            for(int i=0; i<5; i++)
                strcpy(this->subject[i],subject[i]);
        }

        void getdata()
        {
            cout<<"\nEnter student's roll number: ";
            cin>>rollno;
            cout<<"Enter student's name: ";
            cin.get();
            cin.get(name,20);
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
                {
                    grade='A';
                    grdcnt++;
                }
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
            cout<<"\n\nRoll no.: "<<rollno;
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

        static void gradecount()
        {
            cout<<grdcnt;
        }

        int getroll()
        {
            return rollno;
        }
};

int Student :: grdcnt;

int main()
{   
    char subject[5][10];
    cout<<"\nEnter name of 5 subjects: ";
    for(int i=0; i<5; i++)
        cin>>subject[i];
    Student st("IIPS","M.Tech",2,4,subject);

    Student s;
    fstream obj;

    int num;
    do
    {
        printf("\n\n1. Enter record\n2. Display all records\n3. Search a record\n4. Grade A\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&num);
        switch(num)
        {
            case 1: obj.open("Student",ios::app);
                    s=st;
                    s.getdata();
                    s.cal();
                    s.grd();
                    obj.write((char*) &s, sizeof(s));
                    obj.close();
                    break;

            case 2: obj.open("Student",ios::in);
                    while(obj.read((char*) &s, sizeof(s)))
                    {
                        s.showdata();
                    }
                    obj.close();
                    break;

            case 3: cout<<"\nEnter roll no. to search record: ";
                    int search;
                    cin>>search;
                    obj.open("Student",ios::in);
                    while(obj.read((char*) &s, sizeof(s)))
                    {
                        if(search==s.getroll())
                        {
                            s.showdata();
                        }
                    }
                    obj.close();
                    break;

            case 4: cout<<"\n\nNo. of students having A grade are: ";
                    Student::gradecount();
                    break;

            case 5: exit(0);
                    break;

            default:    printf("\nEnter valid option"); 
                        exit(0);
        }
    } while (num!=5);
    
    return 0;
}