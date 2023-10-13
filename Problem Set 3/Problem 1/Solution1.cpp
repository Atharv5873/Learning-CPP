#include<iostream>
using namespace std;

class University{
    protected:
    string name;
    public:
    University(string name):name(name){}
    void Library()
    {
        cout<<"The Library has 123,45 Books"<<endl;
    }
    void Hostel()
    {
        cout<<"There as 5 Hostels, out of which four are AC and one is NON_AC"<<endl;
    }
    void Canteen()
    {
        cout<<"The Canteen is currently under maintenance";
    }
};

class CSEDept : public University{
    protected:
    int Strength;
    public:
    CSEDept(int strength,string name):University(name),Strength(strength){}
    void cselab()
    {
        cout<<"There are nine CSE labs in the Academic Block"<<endl;
    }
    void networklab()
    {
        cout<<"There are eight Network labs in the Academic Block"<<endl;
    }
};
class ECEDept : public University{
    protected:
    int strength;
    public:
    ECEDept(int strenth,string name):University(name),strength(strenth){}
    void ecelab()
    {
        cout<< "There are two ECE Labs in the academic block"<<endl;

    }
    void vlsilab()
    {
        cout << "There are three VLSI Labs in the academic block "<<endl;
    }
};
class Student: public CSEDept, public ECEDept{
    protected:
    string name;
    int sid;
    public:
    Student(string name, int sid, string uniname, int csestrength, int ecestrength): CSEDept(csestrength, uniname), ECEDept(ecestrength, uniname), name(name), sid(sid) {}
};
int main()
{
    Student student("Atharv Sharma",7155,"VIT-AP",23,14);
    student.CSEDept::Library(); 
    student.ECEDept::Library();
    student.CSEDept::Hostel();
    student.ECEDept::Hostel();
    student.CSEDept::Canteen();
    student.ECEDept::Canteen();
    student.cselab();
    student.networklab();
    student.ecelab();
    student.vlsilab();
    return 0;
}