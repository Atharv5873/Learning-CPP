#include <iostream>
using namespace std;

class Employee 
{
    protected:
        string name;
        string address;
        int number;
    public:
        Employee(string name, const string address, int number): name(name), address(address), number(number) {}
        string getName() 
        { 
            return name; 
        }
        string getAddress() 
        { 
            return address; 
        }
        int getNumber() 
        { 
            return number; 
        }
        void setName(string name) 
        { 
            this->name = name; 
        }
        void setAddress(string address) 
        { 
            this->address = address; 
        }
        void setNumber(int number) 
        { 
            this->number = number; 
        }
        virtual double computePay() = 0;
        void mailCheck() 
        {
            cout << "Mailing a check to " << name << " at " << address << endl;
        }
};

class Salary : public Employee 
{
    private:
        double salary;
    public:
        Salary(string name, string address, int number, double salary): Employee(name, address, number), salary(salary) {}
        double getSalary() 
        { 
            return salary; 
        }
        void setSalary(double salary) 
        { 
            this->salary = salary; 
        }
        double computePay() override 
        { 
            return salary; 
        }
};

class EmployeeDriver 
{
    public:
        static void testEmployee(Employee* emp) 
        {
            emp->mailCheck();
        }
};

int main() 
{
    Salary sal("Atharv Sharma", "Kullu, Himachal Pradesh", 7155, 90000.0);
    EmployeeDriver::testEmployee(&sal); 
    return 0;
}

