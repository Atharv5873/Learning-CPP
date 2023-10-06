#include<iostream>
using namespace std;
#include"BloodData.cpp"

int main() {
    BloodData defaultBloodData;
    cout << "Default Blood Data:" << endl;
    cout << "Blood Type: " << defaultBloodData.getBloodType() << endl;
    cout << "Rh Factor: " << defaultBloodData.getrhFactor() << endl;
 
    BloodData customBloodData('B', '-');
    cout << "\nCustom Blood Data:" << endl;
    cout << "Blood Type: " << customBloodData.getBloodType() << endl;
    cout << "Rh Factor: " << customBloodData.getrhFactor() << endl;
 
    customBloodData.setBloodType('A');
    customBloodData.setrhFactor('1');
    cout << "\nUpdated Blood Data:" << endl;
    cout << "Blood Type: " << customBloodData.getBloodType() << endl;
    cout << "Rh Factor: " << customBloodData.getrhFactor() << endl;
 
    return 0;
}

