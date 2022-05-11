//  Kashish Ahuja
//  Program for dynamic constructor

#include<iostream>
using namespace std;
#include<string.h>

class Student
{
    private:
        int *rollno;
        char *name;
    
    public:
        Student(int rollno, char name[])
        {
            this->rollno=new int;
            // *rollno=rolno;
            this->rollno=&rollno;
            int l;
            l=strlen(name);
            this->name=new char(l+1);     //  +1 for null character       //  direct address will be copied in name (string) so no need of pointer  
            strcpy(this->name,name);
        }

        void show()
        {
            cout<<"\nRoll no.: "<<*rollno;
            cout<<"\nName: "<<name;
        }
};

int main()
{
    Student s(24, "Kashish");
    s.show();
    return 0;
}
