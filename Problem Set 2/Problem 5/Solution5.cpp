#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
protected:
    double radius;
    string color;

public:
    Circle() : radius(1.0), color("red") {}
    Circle(double radius, string color) : radius(radius), color(color) {}
    double getRadius() const
    {
        return radius;
    }
    string getColor() const
    {
        return color;
    }
    double getArea() const
    {
        return M_PI * radius * radius;
    }
};

class Cylinder : public Circle
{
protected:
    double height;

public:
    Cylinder() : Circle(), height(1) {}
    Cylinder(double radius, string color) : Circle(radius, color), height(1) {}
    Cylinder(double height, double radius, string color) : Circle(radius, color), height(height) {}
    double getHeight() const
    {
        return height;
    }
    double getVolume() const
    {
        return getArea() * height;
    }
};


int main()
{
    Cylinder c1;
    cout << "Default Cylinder: \n";
    cout << "Radius: " << c1.getRadius() << endl;
    cout << "Height: " << c1.getHeight() << endl;
    cout << "Color: " << c1.getColor() << endl;
    cout << "Base Area: " << c1.getArea() << endl;
    cout << "Volume: " << c1.getVolume() << endl;
    cout << endl;
    Cylinder c2(10, "Green");
    cout << "Customized Cylinder:\n";
    cout << "Radius: " << c2.getRadius() << endl;
    cout << "Height: " << c2.getHeight() << endl;
    cout << "Color: " << c2.getColor() << endl;
    cout << "Base Area: " << c2.getArea() << endl;
    cout << "Volume: " << c2.getVolume() << endl;
    return 0;
}
