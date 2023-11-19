#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<int> vs;

int* readary() {
    fstream file("input.txt", ios::in);
    if (file) {
        string s;
        while (getline(file, s)) {
            int inp = stoi(s);
            vs.push_back(inp);
        }
    }

    int* result = new int[vs.size()];
    copy(vs.begin(), vs.end(), result);

    return result;
}

int main() {
    int* a = readary();
    
    for (int i = 0; i < vs.size(); i++) {
        cout << a[i] << endl;
    }

    delete[] a;

    return 0;
}
