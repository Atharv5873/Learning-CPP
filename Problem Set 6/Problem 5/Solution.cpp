#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

int main()
{
    try
    {
        fstream file1("sample1.txt");
        ofstream file2("sample2.txt");

        if (!file1)
        {
            throw("file not created");
        }

        char c;
        while (file1 >> noskipws >> c)
        {
            char c1;
            if(c==' ')
            {
                c1=c;
                file2<<' ';
            }
            else if (islower(c))
                c1 = toupper(c);
            else
                c1 = tolower(c);

            file2 << c1;
        }

        file1.close();
        file2.close();
    }
    catch (const char *s)
    {
        cout << s;
    }

    return 0;
}
