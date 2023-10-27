#include <iostream>
#include <stdexcept>
using namespace std;

class Area 
{
    public:
        double s1, s2, s3;
        Area(double s1, double s2, double s3)
        {
            if(s1 < 0 || s2 < 0 || s3 < 0 || s1 > 100 || s2 > 100 || s3 > 100)
            {
                throw invalid_argument("All sizes must be less than 100 and positive.");
            }
                this->s1 = s1;
                this->s2 = s2;
                this->s3 = s3;
        }
        double findArea()
        {
            if(s1-s2 == 0)
            {
                throw invalid_argument("Division by Zero.");
            }
            double area = (s1 + s2 + s3)/((s1 - s2) * (s2 * s3));
            cout << "Area: " << area << endl;
            return area;
        }
};

int main() 
{
    try
    {
        Area a1(30,20,10);
        a1.findArea();
    }
    catch(const exception& error)
    {
        cout << error.what() << endl;
    }
    try
    {
        Area a2(40, -20, 30);
        a2.findArea();
    }catch (const exception& e)
    {
        cout << "Negative s2" << endl;
    }
    try
    {
        Area a3(50, 20, 300);
        a3.findArea();
    } 
    catch(const exception& e)
    {
        cout << "Larger s3." << endl;
    }
    return 0;
}
