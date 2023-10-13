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

class CSEDept :virtual public University{
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
class ECEDept :virtual public University{
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
    Student(string name, int sid, string uniname, int csestrength, int ecestrength): University(uniname), CSEDept(csestrength, uniname), ECEDept(ecestrength, uniname), name(name), sid(sid) {}
};
int main()
{
    Student student1("Atharv Sharma",7155,"VIT-AP",29,23);
    student1.Library();
    student1.Hostel();
    student1.Canteen();
    student1.cselab();
    student1.networklab();
    student1.ecelab();
    student1.vlsilab();
    cout<<endl;
    Student student2("Swapnaneel",7051,"IIT-AP",29,23);
    student2.Library();
    student2.Hostel();
    student2.Canteen();
    student2.cselab();
    student2.networklab();
    student2.ecelab();
    student2.vlsilab();
    cout<<endl;
    Student student3("Aakash Sharma",7050,"VIT-AP",29,23);
    student3.Library();
    student3.Hostel();
    student3.Canteen();
    student3.cselab();
    student3.networklab();
    student3.ecelab();
    student3.vlsilab();
    return 0;
}