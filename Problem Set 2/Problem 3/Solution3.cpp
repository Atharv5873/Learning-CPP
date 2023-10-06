#include <iostream>
using namespace std;

class Aves
{
protected:
    string nature;

public:
    Aves(string nature) : nature(nature) {}

    string getNature()
    {
        return nature;
    }
};

class Birds : public Aves
{
    protected:
    string eat;
    public:
    Birds(string eat, string nature): Aves(nature), eat(eat){}
    string getEat()
    {
        return eat;
    }
};
class Parrot : public Birds
{
    protected:
    string food;
    public:
    Parrot(string food, string eat, string nature): food(food), Birds(eat,nature){}
    string getFood()
    {
        return food;
    }

};
int main()
{
    Parrot Mitthu("Worms","Small Pests","Friendly");//Mitthu was the name of my Neighbor's pet Parrot
    cout<<"Food: "<<Mitthu.getFood()<<endl;//was confused about the food and eats thing
    cout<<"Eats: "<<Mitthu.getEat()<<endl;
    cout<<"Nature: "<<Mitthu.getNature()<<endl;
}