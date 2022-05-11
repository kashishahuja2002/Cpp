//  Kashish Ahuja
//  Program for pure virtual function and abstract class to find areas of different shapes

#include<iostream>
using namespace std;

class Shape         //  Abstract class
{
    public:
        virtual float area()=0;
};

class Rectange : public Shape
{
    private:
        float length, width;

    public:
        Rectange(float length, float width)
        {
            this->length=length;
            this->width=width;
        }
        float area()
        {
            return length*width;
        }
};

class Circle : public Shape
{
    private:
        float radius;

    public:
        Circle(float radius)
        {
            this->radius=radius;
        }
        float area()
        {
            return 3.14*radius*radius;
        }
};

class Triangle : public Shape
{
    private:
        float base, height;

    public:
        Triangle(float base, float height)
        {
            this->base=base;
            this->height=height;
        }
        float area()
        {
            return 0.5*base*height;
        }
};

class Cone : public Shape
{
    private:
        float radius, slantHeight;

    public:
        Cone(float radius, float slantHeight)
        {
            this->radius=radius;
            this->slantHeight=slantHeight;
        }
        float area()
        {
            return 3.14*radius*(slantHeight+radius);
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
        float area()
        {
            return 4*3.14*radius*radius;
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
        float area()
        {
            return 2*3.14*radius*(radius+Height);
        }
};

int main()
{
    Circle cir(2.5);
    Rectange rect(2,4.5);
    Triangle tri(5.5,10);
    Cone con(2.4, 6);
    Sphere sph(4);
    Cylinder cyl(4.3, 8.1);
    Shape *s[6]= { &cir, &rect, &tri, &con, &sph, &cyl };
    for(int i=0; i<6; i++)
    {
        cout<<"\n Area: "<<s[i]->area();
    }
    return 0;
}