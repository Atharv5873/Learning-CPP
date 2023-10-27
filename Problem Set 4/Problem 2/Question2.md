# Problem 2
Create a Bill class to find the bill of the given item with item code, item price and quantity. Use proper exception handling mechanism with appropriate exception message. 
Sample testcase:
int main(){
    Item i1(101, 1050);
    Item i2(102, 450);
    Bill b1(i1,-3);
    Bill b2(i2, 4);
    b1.findBill(i1,b1);
    b2.findBill(i2,b2);
}

Sample output:
Bill 1: Invalid quantity
Bill 2: 1800 

