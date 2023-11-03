#include<iostream>
using namespace std;

template<typename t>
t add(t a,t b)
{
    return (a+b);
}

int main()
{
    cout<<add(9,1)<<endl;
    cout<<add(11,9)<<endl;
}

