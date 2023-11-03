#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Employee {
private:
    T eid;
    T ecode;

public:
    Employee(T eid, T ecode):eid(eid),ecode(ecode){}
    void checkValidity() {
        if (eid == ecode) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
};
int main()
{
    Employee <string> e1("22BCB7155","22BCB7155");
    e1.checkValidity();
    Employee <int> e2(7155,7050);
    e2.checkValidity();
}