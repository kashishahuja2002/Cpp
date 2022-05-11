//  Kashish Ahuja
//  Program for multiple inheritance

#include<iostream>
using namespace std;

class Author
{
    private:
        char authorname[20];
        int authorage;
    
    public:
        void get()
        {
            cout<<"\nEnter author's name: ";
            cin>>authorname;
            cout<<"Enter author's age: ";
            cin>>authorage;
        }

        void show()
        {
            cout<<"\nAuthor's name: "<<authorname;
            cout<<"\nAuthor's age: "<<authorage;
        }
};

class Publisher
{
    private:
        int publisherid;
        char publishername[20];
    
    public:
        void get()
        {
            cout<<"\nEnter publisher's id: ";
            cin>>publisherid;
            cout<<"Enter pushlisher's name: ";
            cin>>publishername;
        }

        void show()
        {
            cout<<"\nEnter publisher's id: "<<publisherid;
            cout<<"\nEnter pushlisher's name: "<<publishername;
        }
};

class Book : public Author, public Publisher
{
    private:
        int bookid;
        char bookname[20];
    
    public:
        void getdata()
        {
            Author::get();
            Publisher::get();
            cout<<"\nEnter book's id: ";
            cin>>bookid;
            cout<<"Enter book's name: ";
            cin>>bookname;
        }

        void showdata()
        {
            Author::show();
            Publisher::show();
            cout<<"\nEnter book's id: "<<bookid;
            cout<<"\nEnter book's name: "<<bookname;
        }
};

int main()
{
    Book b;
    b.getdata();
    b.showdata();
    return 0;
}