//  Kashish Ahuja
//  Program for multiple inheritance using constructors

#include<iostream>
using namespace std;
#include<string.h>

class Actor
{
    private:
        char actorname[20];
        int actorage;
    
    public:
        Actor()
        {}

        Actor(char actorname[20], int actorage)
        {
            strcpy(this->actorname,actorname);
            this->actorage=actorage;
        }

        void show()
        {
            cout<<"\nActor's name: "<<actorname;
            cout<<"\nActor's age: "<<actorage;
        }
};

class Actoress
{
    private:
        char actoressname[20];
        int actoressage;
    
    public:
        Actoress()
        {}

        Actoress(char actoressname[20], int actoressage)
        {
            strcpy(this->actoressname,actoressname);
            this->actoressage=actoressage;
        }

        void show()
        {
            cout<<"\nEnter actoress's name: "<<actoressname;
            cout<<"\nEnter actoress's age: "<<actoressage;
        }
};

class Movie : public Actor, public Actoress
{
    private:
        int movieid;
        char moviename[20];
    
    public:
        Movie(int movieid, char moviename[]):Actor("Hero",22),Actoress("Heroine",18)
        {
            this->movieid=movieid;
            strcpy(this->moviename,moviename);
        }

        void showdata()
        {
            Actor::show();
            Actoress::show();
            cout<<"\nEnter movie's id: "<<movieid;
            cout<<"\nEnter movie's name: "<<moviename;
        }
};

int main()
{
    Movie m(123,"kash");
    m.showdata();
    return 0;
}