#include<iostream>
using namespace std;
class Position
{
    protected:
        int x;
        int y;
        double speed;
        int direction;
    public:
        Position():x(0),y(0),speed(0.0),direction(0){}
        Position(int x, int y, double speed, int direction): x(x), y(y), speed(speed), direction(direction) {}
        string Tostring()
        {
            return "Position("+to_string(x)+","+to_string(y)+")";
        }
};
class Airplane
{
    protected:
        string name;
        Position Planeposition;
        int numberCreated;
        const int MAX_SPEED=500;
    public:
        Airplane(const std::string& name) : name(name)
        {
            numberCreated++;
        }
        int GetNumberCreated()
        {
            return numberCreated;
        }
        string ToString()
        {
            return "Airplane( " + name + ", " + Planeposition.Tostring() + ")";
        }
        void Move() {
        // Code for moving
    }

    void TurnRight() {
        // Code for turning right
    }

    void TurnLeft() {
        // Code for turning left
    }
    void Acccelerate(){
        // code to accelerate
    }
    void Decelerate(){
        // code to decelerate
    }
};
class PassengerPlane:public Airplane
{
    protected:
        string airlineName;
        int numberPassengers;
        int flightNumber;
    public:
        PassengerPlane(string name,string airlineName,int numberPassengers, int flightNumber): Airplane(name), airlineName(airlineName),numberPassengers(numberPassengers), flightNumber(flightNumber) {}
        void BoardPlane(){
            //code for boarding
        }
        string ToString()
        {
            return "PassengerPlane:\n" + airlineName + " " + Airplane::ToString();
        }
};
class FighterJet:public Airplane
{
    protected:
        string fighterType;
    public:
        FighterJet(string name,string fighterType): Airplane(name), fighterType(fighterType) {}
        string ToString()
        {
            return "FighterJet:\n" + fighterType + " " + Airplane::ToString();
        }
};
int main() {
    Position position(4, 5, 4.5, 7);
    PassengerPlane p("Boeing 747", "Air India", 387, 9211);
    FighterJet f1("F-22", "Lockheed Martin F-22 Raptor.");
    cout << p.ToString()<< endl;
    cout << f1.ToString()<<endl;
    return 0;
}
