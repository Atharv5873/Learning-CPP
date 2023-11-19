#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
public:
    string name;
    string regno;
    float marks;

    Student() {}

    Student(const string &name, const string &regno, float marks) : name(name), regno(regno), marks(marks) {}
};

void convertAndWriteToFile()
{
    ifstream inputFile("students.txt");

    if (!inputFile.is_open())
    {
        cerr << "Error opening students.txt" << endl;
        return;
    }

    ofstream outputFile("outstudents.txt");

    if (!outputFile.is_open())
    {
        cerr << "Error opening outstudents.txt" << endl;
        inputFile.close();
        return;
    }

    string name;
    string regno;
    float marks;

    while (inputFile >> name >> regno >> marks)
    {
        Student student(name, regno, marks);

        outputFile << "Name: " << student.name << endl;
        outputFile << "Reg No: " << student.regno << endl;
        outputFile << "Marks: " << fixed << setprecision(2) << student.marks << endl;
        outputFile << "" << endl;
    }

    inputFile.close();
    outputFile.close();

    if (outputFile.fail())
    {
        cerr << "Error writing to outstudents.txt" << endl;
    }
    else
    {
        cout << "Conversion and writing to outstudents.txt successful." << endl;
    }
}

int main()
{
    convertAndWriteToFile();

    return 0;
}
