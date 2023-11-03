#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Vehicle 
{
    protected:
        T regNo;
    public:
        Vehicle(T reg) : regNo(reg) {}
        void display() 
        {
            cout << "Registration No: " << regNo << endl;
        }
};

template<typename U>
class Car : public Vehicle<string> 
{
    private:
        U chassisNo;
        string name;
public:
    Car(U chassis, string carName, string reg) : Vehicle<string>(reg), chassisNo(chassis), name(carName) {}
    void display() 
    {
        cout << "Car Details:" << endl;
        cout << "Chassis No: " << chassisNo << endl;
        cout << "Name: " << name << endl;
        Vehicle<string>::display();
        cout << endl;
    }
};
template<typename U>
class Bike : public Vehicle<string> 
{
    private:
        U chassisNo;
        string name;
    public:
        Bike(U chassis, string bikeName, string reg) : Vehicle<string>(reg), chassisNo(chassis), name(bikeName) {}
    void display() 
    {
        cout << "Bike Details:" << endl;
        cout << "Chassis No: " << chassisNo << endl;
        cout << "Name: " << name << endl;
        Vehicle<string>::display();
        cout << endl;
    }
};
int main() 
{
    Car<string> car1("FORDXX62", "Ford Fiesta", "CAR1");
    Car<string> car2("SUZUKIAL", "Maruti Alto", "CAR2");
    Bike<int> bike1(8796, "Royal Enfield", "BIKE23");
    Bike<int> bike2(67890, "Ninja", "BIKE47");
    car1.display();
    car2.display();
    bike1.display();
    bike2.display();

    return 0;
}
