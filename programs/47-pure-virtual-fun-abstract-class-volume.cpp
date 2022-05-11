//  Kashish Ahuja
//  Program for pure virtual function and abstract class to find volume of different shapes

#include<iostream>
using namespace std;

class Shape
{
    public:
        virtual float volume()=0;
};

class Cuboid : public Shape
{
    private:
        float length, width, height;

    public:
        Cuboid(float length, float width, float height)
        {
            this->length=length;
            this->width=width;
            this->height=height;
        }
        float volume()
        {
            return length*width*height;
        }
};

class Cone : public Shape
{
    private:
        float radius, height;

    public:
        Cone(float radius, float height)
        {
            this->radius=radius;
            this->height=height;
        }
        float volume()
        {
            return (1/3.0)*3.14*radius*radius*height;
        }
};

class Sphere : public Shape
{
    private:
        float radius;

    public:
        Sphere(float radius)
        {
            this->radius=radius;
        }
        float volume()
        {
            return (4/3)*3.14*radius*radius*radius;
        }
};

class Cylinder : public Shape
{
    private:
        float radius, Height;

    public:
        Cylinder(float radius, float Height)
        {
            this->radius=radius;
            this->Height=Height;
        }
        float volume()
        {
            return 3.14*radius*radius*Height;
        }
};

int main()
{
    Cuboid cub(2, 4.5, 8);
    Cone con(7.6, 7);
    Sphere sph(4);
    Cylinder cyl(4.3, 8.1);
    Shape *s[4]= { &cub, &con, &sph, &cyl };
    for(int i=0; i<4; i++)
    {
        cout<<"\n volume: "<<s[i]->volume();
    }
    return 0;
}