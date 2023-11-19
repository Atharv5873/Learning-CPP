#include <iostream>
#include <fstream>
using namespace std;

class Item
{
public:
    int icode;
    string iname;
    int price;
    int qty;

    Item(int c, string n, int p, int q)
    {
        icode = c;
        iname = n;
        price = p;
        qty = q;
    }

    void store()
    {
        ofstream stock("stock.txt", ios::app);
        if (stock.is_open())
        {
            stock << icode << endl;
            stock << iname << endl;
            stock << price << endl;
            stock << qty << endl;
            stock << endl;
            cout << "File created" << endl;
        }
        else
        {
            cout << "Error File not created" << endl;
        }
    }

    void available()
    {
        int icode;
        string iname;
        int price;
        int qty;
        ifstream output("stock.txt");
        if (output.is_open())
        {
            cout << "Stock :" << endl;

            while (output >> icode >> iname >> price >> qty)
            {
                cout << "icode : " << icode << endl;
                cout << "iname : " << iname << endl;
                cout << "price : " << price << endl;
                cout << "quantity : " << qty << endl;
                cout << endl;
            }
            output.close();
        }
        else
        {
            cout << "error" << endl;
        }
    }
};

int main()
{
    Item i1(1, "FIFA22", 2999, 43);
    Item i2(2, "Fallout New Vegas", 999, 19);
    Item i3(3, "Far Cry 3", 1300, 20);
    Item i4(4, "Controller", 999, 30);
    Item i5(5, "Remote Play", 1599, 23);

    i1.store();
    i2.store();
    i3.store();
    i4.store();
    i5.store();

    i1.available();

    return 0;
}
