#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

class Shape {
private:
    double s1, s2, s3;

public:
    Shape(double side1, double side2, double side3) : s1(side1), s2(side2), s3(side3) {
        if (s1 <= 0 || s2 <= 0 || s3 <= 0 || s1 >= 100 || s2 >= 100 || s3 >= 100) {
            throw invalid_argument("Side(s) out of range");
        }
    }
    double getSide1() { return s1; }
    double getSide2() { return s2; }
    double getSide3() { return s3; }
};

class Area {
private:
    Shape shape;

public:
    Area(Shape s) : shape(s) {}
    double findArea() {
        double s1 = shape.getSide1();
        double s2 = shape.getSide2();
        double s3 = shape.getSide3();

        if (s1 + s2 <= s3 || s1 + s3 <= s2 || s2 + s3 <= s1) {
            throw domain_error("Invalid triangle sides");
        }

        return (s1 + s2 + s3) / (s1 - s2) * (s2 * s3);
    }
};

int main() {
    try {
        Shape s1(30, 20, 10);
        Shape s2(40, -20, 30);
        Shape s3(50, 20, 300);
        Area a1(s1);
        Area a2(s2);
        Area a3(s3);

        cout << a1.findArea() << endl;
        cout << a2.findArea() << endl;
        cout << a3.findArea() << endl;
    } catch (const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    } catch (const domain_error& e) {
        cerr << "Domain error: " << e.what() << endl;
    }

    return 0;
}
