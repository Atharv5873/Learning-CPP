#include <iostream>
using namespace std;

class Point
{
protected:
    double x;
    double y;

public:
    Point(double x, double y) : x(x), y(y) {}

    double getx()
    {
        return x;
    }
    double gety()
    {
        return y;
    }
};

class ColoredPoint : public Point
{
protected:
    string color;

public:
    ColoredPoint(string c, double x, double y) : Point(x, y), color(c) {}

    string getcolor()
    {
        return color;
    }
};

class Colored3DPoint : public ColoredPoint
{
protected:
    double z;

public:
    Colored3DPoint(string color, double x, double y, double z) : ColoredPoint(color, x, y), z(z) {}

    double getz()
    {
        return z;
    }
};

class Driver
{
public:
    static void printColored3DPoint(Colored3DPoint &Point)
    {
        cout << "X : " << Point.getx() << endl;
        cout << "Y : " << Point.gety() << endl;
        cout << "Z : " << Point.getz() << endl;
        cout << "Color: " << Point.getcolor() << endl;
    }
};

int main()
{
    double x,y,z;
    string c;
    cout<<"Enter the 3 Coordinates : ";
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"\nEnter the color: ";
    cin>>c;
    cout<<endl;
    Colored3DPoint colored3DPoint(c,x,y,z);
    Driver::printColored3DPoint(colored3DPoint);


    return 0;
}
