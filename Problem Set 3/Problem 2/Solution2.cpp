#include<iostream>
using namespace std;

class Monster
{
    protected:
        string name;
    public:
        Monster(string name):name(name){}
        virtual string attack()
        {
            return "Regeneration:\nMonsters with this power can heal wounds and injuries at an accelerated rate, making them formidable adversaries in battle. This power allows them to recover quickly, making them more resilient and challenging to defeat. ";
        }
};
class FireMonster:public Monster
{
    public:
        FireMonster(string name):Monster(name){}
        string attack()
        {
            return "Inferno Blaze:\nThe character or monster unleashes a torrent of scorching flames, creating an intense inferno that engulfs their target. This powerful fire move can cause devastating damage and leave a blazing aftermath.";
        }
};
class WaterMonster:public Monster
{
    public:
        WaterMonster(string name):Monster(name){}
        string attack()
        {
            return "Tidal Torrent:\nThe character or monster summons the power of the ocean, creating a massive tidal wave or water surge that crashes upon their foes. This water move can drench and immobilize opponents while packing a significant punch.";
        }
};
class StoneMonster:public Monster
{
    public:
        StoneMonster(string name):Monster(name){}
        string attack()
        {
            return "Earthen Avalanche:\nThe character or monster triggers a violent upheaval of the ground, causing rocks, boulders, and debris to tumble down upon their enemies. This stone move can deal substantial damage and create barriers of rocky defense.";
        }
};

int main()
{
    Monster m1("Slenderman");
    FireMonster m2("Dragon");
    WaterMonster m3("Kraken");
    StoneMonster m4("Golem");
    cout<<m1.attack()<<endl;
    cout<<m2.attack()<<endl;
    cout<<m3.attack()<<endl;
    cout<<m4.attack()<<endl;
    return 0;
}