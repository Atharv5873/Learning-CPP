#include<iostream>
using namespace std;

class BloodData
{
    private:
    char BloodType;
    char rhFactor;
    public:
    BloodData() : BloodData('O','1') {}

    BloodData(char BloodType, char rhFactor)
    {
        this->BloodType=BloodType;
        this->rhFactor=rhFactor;
    }
    void setBloodType(char newBT)
    {
        BloodType=newBT;
    }
    void setrhFactor(char newrh)
    {
        rhFactor=newrh;
    }
    char getBloodType()
    {
        return BloodType;
    }
    char getrhFactor()
    {
        return rhFactor;
    }
};