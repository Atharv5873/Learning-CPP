#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <typename T>
T doubling(T a) 
{
    string s;
    char c;
    int i;
    if(typeid(a)==typeid(s))
    return a+a;
    if(typeid(a)==typeid(c))
    return a+a;
    if(typeid(a)==typeid(i))
    return a*a;
}


int main() 
{
    string str = "Atharv";
    int num = 5;

    cout << doubling(str) << endl;  
    cout << doubling(num) << endl;  

    return 0;
}
