#include <iostream>
#include "Circles.cpp"
 
using namespace std;
 
int main() {
    Circle circle1, circle2, circle3;
 
    circle1.setRadius(2.5);
 
    circle2.setRadius(5.0);
 
    cout << "Circle 1:" << std::endl;
    cout << "Radius: " << circle1.getRadius() << std::endl;
    cout << "Diameter: " << circle1.getDiameter() << std::endl;
    cout << "Area: " << circle1.getArea() << std::endl;
 
    cout << "\nCircle 2:" << std::endl;
    cout << "Radius: " << circle2.getRadius() << std::endl;
    cout << "Diameter: " << circle2.getDiameter() << std::endl;
    cout << "Area: " << circle2.getArea() << std::endl;
 
    cout << "\nCircle 3:" << std::endl;
    cout << "Radius: " << circle3.getRadius() << std::endl;
    cout << "Diameter: " << circle3.getDiameter() << std::endl;
    cout << "Area: " << circle3.getArea() << std::endl;
 
    return 0;
}
