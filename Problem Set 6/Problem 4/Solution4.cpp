#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    fstream file("exampleinput.txt");
    ofstream file2("exampleoutput.txt");
    char ch;
    while(file.get(ch))
    {
        if(isalpha(ch))
        file2.put(ch);
    }
    file.close();
    file2.close();
}