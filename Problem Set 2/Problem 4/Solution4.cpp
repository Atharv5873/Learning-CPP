#include<iostream>
using namespace std;
class Employee
{
    protected:
    int eno;
    string ename;
    public:
    void setemp(int eno,string ename)
    {
        this->eno=eno;
        this->ename=ename;
    }
    void putemp()
    {
        cout<<"\nEmployee Number: "<<eno<<endl;
        cout<<"Employee Name: "<<ename<<endl;
    }
};
class Department : public Employee
{
    protected:
    int dno;
    string dname;
    public:
    void setdept(int dno, string dname)
    {
        this->dno=dno;
        this->dname=dname;
    }
    void putdept()
    {
        cout<<"\nDepartment Number: "<<dno<<endl;
        cout<<"Department Name: "<<dname<<endl;
    }
};

int main()
{
    Department d;
    d.setemp(100,"John");
    d.setdept(20,"Sales");
    d.putemp();
    d.putdept();
}