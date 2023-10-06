#include <iostream>
#include <string>

using namespace std;

class FormLetterWriter {
private:
    string lastName;
    string firstName;

public:

    static void displaySalutation(string lastName, string firstName = "") {
        if (!firstName.empty()) {
            cout << "Dear " << firstName << " " << lastName << "," << endl;
        } else {
            cout << "Dear Mr. or Ms. " << lastName << "," << endl;
        }
        cout << "Thank you for your recent order." << endl;
    }
};

int main() {

    FormLetterWriter::displaySalutation("Sharma");
    FormLetterWriter::displaySalutation("Freya", "Thakur");

    return 0;
}
