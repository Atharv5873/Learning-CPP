#include<iostream>
#include"Patient.cpp"

using namespace std;

int main()
{
    Patient DefaultPatient;
    cout<<"\nDefault Patient: \n";
    cout<<"ID Number: "<<DefaultPatient.getidNumber()<<endl;
    cout<<"Age: "<<DefaultPatient.getAge()<<endl;
    cout<<"Blood Type: "<<DefaultPatient.getBloodData().getBloodType()<<endl;
    cout<<"Rh Factor: "<<DefaultPatient.getBloodData().getrhFactor()<<endl;

    BloodData customBloodData('A','+');
    Patient CustomPatient(7155,19,customBloodData);
    cout<<"\nCustom Patient: \n";
    cout<<"ID Number: "<<CustomPatient.getidNumber()<<endl;
    cout<<"Age: "<<CustomPatient.getAge()<<endl;
    cout<<"Blood Type: "<<CustomPatient.getBloodData().getBloodType()<<endl;
    cout<<"Rh Factor: "<<CustomPatient.getBloodData().getrhFactor()<<endl;

}