#include<iostream>
#include<string>
using namespace std;

class Shape
{
    protected:
        string color;
    public:
        Shape(string color):color(color){}
        virtual double getArea()=0;
        virtual string toString()=0;
};
class Rectangle :public Shape
{
    protected:
        int length;
        int width;
    public:
        Rectangle(string color,int length,int width):Shape(color),length(length),width(width){}
        double getArea() override
        {
            return (double)length*width;
        }
        string toString() override
        {
            return "Rectangle:\nColor: "+ color + "\nLength: "+ to_string(length)+ "\nWidth: " +to_string(width); 
        }
};
class Triangle: public Shape
{
    protected:
        int base;
        int height;
    public:
        Triangle(string color,int base,int height):Shape(color),base(base),height(height){}
        double getArea()override
        {
            return 0.5*(double)(base)*height;
        }
        string toString() override
        {
            return "Triangle:\nColor: "+ color + "\nBase: "+ to_string(base)+ "\nHeight: " +to_string(height); 
        }
};
int main()
{
    Rectangle rect("red",10,2);
    Triangle tri("blue",5,10);
    cout<<rect.toString()<<endl;
    cout<<"Area: "<<rect.getArea()<<endl;
    cout<<tri.toString()<<endl;
    cout<<"Area: "<<tri.getArea()<<endl;
    return 0;
}