#include<iostream>

using namespace std;
class Item {
private:
    int itemCode;
    int itemPrice;

public:
    Item(int code, int price) : itemCode(code), itemPrice(price) {}

    int getCode()
    { 
        return itemCode; 
    }
    int getPrice()
    { 
        return itemPrice; 
    }
};

class Bill
{
    private:
        Item item;
        int quantity;
    public:
        Bill(Item item, int quantity) : item(item), quantity(quantity)
        {
            if(quantity<0)
            {
                throw invalid_argument("Invalid Qiantity");
            }
        }
        int findBill()
        {
            return item.getPrice()*quantity;
        }
};    
int main() {
    Item i1(101, 1050);
    Item i2(102, 450);

    try 
    {
        Bill b1(i1, -3);
        cout << "Bill 1: Invalid quantity" << endl;
    } 
    catch (const invalid_argument e) 
    {
        cerr << "Bill 1: " << e.what() << endl;
    }

    Bill b2(i2, 4);
    cout << "Bill 2: " << b2.findBill() << endl;

    return 0;
}

