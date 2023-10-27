#include <iostream>
using namespace std;

class InvalidItem : public exception 
{
    public:
        const char* what() const noexcept 
        {
            return "Invalid Item";
        }
};

class InvalidPrice : public exception 
{
    public:
        const char* what() const noexcept 
        {
            return "Invalid Price";
        }
};

class Bill 
{
    public:
        static int findBill(int item, int price) 
        {
            try 
            {
                if (item <= 0)
                throw InvalidItem();
                if (price < 0)
                throw InvalidPrice();
                return item * price;
            } 
            catch (const exception& error) 
            {
                cerr << error.what() << endl;
                return -1;
            }
        }
};

int main() {
    Bill bill;

    int result1 = bill.findBill(10, 30);
    int result2 = bill.findBill(-10, 3);
    int result3 = bill.findBill(30, -3);

    if (result1 >= 0) 
    {
        cout << "Test Case-1: " << result1 << endl;
    }

    if (result2 >= 0) 
    {
        cout << "Test Case-2: " << result2 << endl;
    }

    if (result3 >= 0) 
    {
        cout << "Test Case-3: " << result3 << endl;
    }

    return 0;
}
