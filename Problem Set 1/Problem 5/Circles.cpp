#include<iostream>
#include<cmath>

using namespace std;

class Circle{
    private:
    double radius;
    double diameter;
    double area;
    public:
    Circle(){
        setRadius(1);
    }
    void setRadius(double radius)
    {
        this->radius=radius;
        diameter=2*radius;
        area=M_PI * pow(radius,2);
    }
    double getRadius() const {
        return radius;
    }
 
    double getDiameter() const {
        return diameter;
    }
 
    double getArea() const {
        return area;
    }
};
