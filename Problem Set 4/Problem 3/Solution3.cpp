#include<iostream>
#include<string>
#include <stdexcept> 
using namespace std;
class NameError : public exception
{
    public:
    const char* what() const noexcept
    {
        return "Invalid Name";
    }
};
class AgeError: public exception
{
    public:
    const char* what() const noexcept
    {
        return "Invalid Age";
    }
};
void Registration(string s,int n)
{
    if(s.length()<3)
    throw NameError();
    if(n<25)
    throw AgeError();
}
int main() {
    try {
        Registration("Rahul", 23);
        cout << "\nTest Case-1: User Registered" << endl;
    } catch (const NameError& e) {
        cerr << "\nTest Case-1: " << e.what() << endl;
    } catch (const AgeError& e) {
        cerr << "Test Case-1: " << e.what() << endl;
    }

    try {
        Registration("Ra", 23);
        cout << "\nTest Case-2: User Registered" << endl;
    } catch (const NameError& e) {
        cerr << "\nTest Case-2: " << e.what() << endl;
    } catch (const AgeError& e) {
        cerr << "\nTest Case-2: " << e.what() << endl;
    }

    try {
        Registration("Rahul", 28);
        cout << "\nTest Case-3: User Registered" << endl;
    } catch (const NameError& e) {
        cerr << "\nTest Case-3: " << e.what() << endl;
    } catch (const AgeError& e) {
        cerr << "\nTest Case-3: " << e.what() << endl;
    }

    return 0;
}
