#include<iostream>
#include"BloodData.cpp"

using namespace std;

class Patient{
    private:
    int idNumber;
    int age;
    BloodData bloodData;
    public:
    Patient(): idNumber(0),age(0), bloodData(){}

    Patient(int idNumber,int age, BloodData bloodData): idNumber(idNumber),age(age), bloodData(bloodData){}

    int getidNumber()
    {
        return idNumber;
    }
    int getAge()
    {
        return age;
    }
    BloodData getBloodData()
    {
        return bloodData;
    }
};
