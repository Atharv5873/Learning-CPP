#include<iostream>
using namespace std;

template<class t,class u>
class Faculty
{
    protected:
        t regno;
        u application_no;
        string name;
        int age;
        string disignation;
    public:
        Faculty(t regno,u application_no, string name,int age):regno(regno),application_no(application_no),name(name),age(age)
        {
            if(age>=50 && age<=60)
            disignation="Professor";
            else if (age>=40 && age<50)
            disignation="Associate Professor";
            else
            disignation="Assistant Professor";
        }
        void display()
        {
            cout<<"Registration No : "<<regno<<endl;
            cout<<"Application No. : "<<application_no<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Designation : "<<disignation<<endl;
        }
};
int main()
{
    Faculty <string,int> f1("23PHD6758",2023448445,"Tarun Kumar",35);
    f1.display();
    Faculty <int,int> f2(7356,843646733,"Atharv Sharma",56);
    f2.display();
}
