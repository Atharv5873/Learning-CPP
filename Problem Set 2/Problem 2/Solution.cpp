#include<iostream>
using namespace std;

class Vehicle
{
    protected:
    string type;
    public:
    Vehicle(string type): type(type) {}

    string getType()
    {
        return type;
    }
};
class Car: public Vehicle
{
    protected:
    string brand;
    public:
    Car(string brand, string type): Vehicle(type), brand(brand){}

    string getBrand()
    {
        return brand;
    }
};
int main()
{
    Car car1("Porshe","Supercar");
    cout<<"Brand: "<<car1.getBrand()<<endl;
    cout<<"Type: "<<car1.getType()<<endl;
}
