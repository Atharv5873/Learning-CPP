#include <iostream>
using namespace std;

template<typename t>
class Student
{
public:
    t sid;
    string name;
    int marks[5];
    Student() : sid(), name(), marks{0,0,0,0,0} {}
    Student(t sid, string name, int m1, int m2, int m3, int m4, int m5) : sid(sid), name(name), marks{m1,m2,m3,m4,m5} {}
    void display()
    {
        cout << "Student ID: " << sid << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
};

int main()
{
    Student<string> student2;
    student2.display();
    Student<int> student1(7155, "Atharv Sharma", 98, 95, 92, 97, 99);
    student1.display();

    return 0;
}
 
