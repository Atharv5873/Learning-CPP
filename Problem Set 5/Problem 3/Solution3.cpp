#include<iostream>
using namespace std;

template<typename t,typename n>
void concatenation(t a,n b)
{
    cout<<a<<b<<endl;;
}
int main()
{
    concatenation('a',7);
    concatenation("Atharv",7155);
}