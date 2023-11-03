#include<iostream>
using namespace std;

template<typename t>
void add(t a,t b)
{
    cout<<a+b<<endl<<a-b<<endl<<a*b<<endl<<float(a/b);
}

int main()
{
    add(9,1);
}

