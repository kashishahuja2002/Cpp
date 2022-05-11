//  Kashish Ahuja
//  Program for multi level inheritance using constructors

#include<iostream>
using namespace std;
#include<string.h>

class College
{
    private:
        int regno;
        char clgname[10];

    public:
        College()
        {}

	  College(int regno, char clgname[])
	  {
		this->regno=regno;
		strcpy(this->clgname,clgname);
	  }

	  void show()
	  {
		cout<<"\nCollege's registration number: "<<regno;
		cout<<"\nCollege's name: "<<clgname;
	  }
};

class Branch : public College
{
    private:
	  char branch[10];
	  int facultyno, studentno;

    public:
	  Branch()
	  {}

	  Branch(char branch[], int facultyno, int studentno):College(12345, "DAVV")
	  {
		strcpy(this->branch,branch);
		this->facultyno=facultyno;
		this->studentno=studentno;
	  }

	  void show()
	  {
		College::show();
		cout<<"\nBranch's name: "<<branch;
		cout<<"\nNumber of faculties: "<<facultyno;
		cout<<"\nNumber of students: "<<studentno;
	  }
};

class Student : public Branch
{
    private:
	  int rollno;
	  char name[10];

    public:

	  Student(int rollno, char name[]):Branch("Mtech", 20, 150)
	  {
		this->rollno=rollno;
		strcpy(this->name,name);
	  }

	  void show()
	  {
		Branch::show();
		cout<<"\nRoll number of student: "<<rollno;
            cout<<"\nStudent's name: "<<name;
        }
};

int main()
{
    Student s(24,"Kashish");
    s.show();
    return 0;
}