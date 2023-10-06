#include <iostream>
#include <string>
using namespace std;
#define MAXS 30
#define MAXT 5

class Person
{
protected:
    string name;
    string address;

public:
    Person(string name, string address) : name(name), address(address) {}

    string getName()
    {
        return name;
    }

    string getAddress()
    {
        return address;
    }

    void setAddress(string address)
    {
        this->address = address;
    }

    virtual string toString()
    {
        return "Name: " + name + " || Address: " + address;
    }
};

class Student : public Person
{
protected:
    int numCourses;
    string courses[MAXS];
    int grades[MAXS];

public:
    Student(string name, string address) : Person(name, address), numCourses(0) {}

    string toString() override
    {
        return Person::toString() + "\nNumber of Courses: " + to_string(numCourses);
    }

    void addCourseGrade(string course, int grade)
    {
        if (numCourses < 30)
        {
            courses[numCourses] = course;
            grades[numCourses] = grade;
            numCourses++;
        }
        else
            cout << "Student has reached the maximum number of courses" << endl;
    }

    void printGrades()
    {
        cout << "Grades of " << getName() << ":\n";
        for (int i = 0; i < numCourses; i++)
            cout << courses[i] << " - " << grades[i] << endl;
    }

    double getAverageGrade()
    {
        if (numCourses == 0)
            return 0;
        int total = 0;
        for (int i = 0; i < numCourses; i++)
            total += grades[i];
        return static_cast<double>(total) / numCourses;
    }
};

class Teacher : public Person
{
protected:
    int numCourses;
    string courses[MAXT];

public:
    Teacher(string name, string address) : Person(name, address), numCourses(0) {}

    string toString() override
    {
        return Person::toString() + "\nNumber of Courses: " + to_string(numCourses);
    }

    bool addCourse(string course)
    {
        if (numCourses < 5)
        {
            courses[numCourses] = course;
            numCourses++;
            return true;
        }
        else
        {
            cout << "A teacher cannot teach more than 5 courses concurrently." << endl;
            return false;
        }
    }

    bool removeCourse(string course)
    {
        for (int i = 0; i < numCourses; i++)
        {
            if (courses[i] == course)
            {
                for (int j = i; j < numCourses - 1; j++)
                {
                    courses[j] = courses[j + 1];
                }
                numCourses--;
                return true;
            }
        }
        cout << "Course not found." << endl;
        return false;
    }
};

int main()
{
    Student student("Atharv", "Kullu");
    student.addCourseGrade("Physics", 90);
    student.addCourseGrade("Chemistry", 94);
    student.addCourseGrade("Maths", 93);

    Teacher teacher("Mr. Kuldeep Sharma", "Lauhal");
    teacher.addCourse("Math");
    teacher.addCourse("Science");
    teacher.addCourse("History");

    cout << "Student Information:\n"
         << student.toString() << endl;
    cout << "\nTeacher Information:\n"
         << teacher.toString() << endl;

    student.printGrades();
    cout << "Average Grade: " << student.getAverageGrade() << endl;

    teacher.removeCourse("Science");

    return 0;
}
