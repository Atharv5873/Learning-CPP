#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
    string name="Atharv Sharma";
    string regno="22BCB7155";
    time_t cTime = time(0);
    tm *lTime = localtime(&cTime);
    ofstream file("log.txt");
    if(file.is_open())
    {
        file<<"Name: "<<name <<"\nRegistration Number: " <<regno <<"\nDate and Time: " << asctime(lTime);
        cout<<"File Created Sucessfully!!";
        file.close();
    }
    else
    {
        cerr<<"Unable to create text file!!!";
    }
}