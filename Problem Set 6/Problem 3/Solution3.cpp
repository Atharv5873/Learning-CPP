#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Give 3 Numbers to compare: \n";
    cin>>a>>b>>c;
    int biggest = max(max(a, b), c);
    ofstream file("output.txt");
    if(file.is_open())
    {
        file << "Input 1 : "<<a<<endl;
        file << "Input 2 : "<<b<<endl;
        file << "Input 3 : "<<c<<endl;
        file << "The Biggest Number is : "<<biggest<<endl;
        file.close();
    }
    else
    {
        cout << "Unable to open output.txt";
    }
}