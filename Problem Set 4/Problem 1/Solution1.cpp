#include<iostream>
#include<vector>
using namespace std;
vector<string> team_members;
void selection(string name,int age)
    {
        try
        {
            if(age>=18 && age< 150){
                team_members.push_back(name);
                cout<<name<<" added to the team.\n";
            }
            else
            {
                if (age < 0 || age > 150)
                throw "Invalid age exception";
            }
        }
        catch (const char *catcher)
        {
            cerr<<"Error: "<<catcher<<endl;
        }
    };  
int main()
{
    selection("Atharv",19);
    selection("Aakash",21);
    selection("Salman",-9);
    selection("Raj",176);
    cout<<"Team Members: \n";
    for(string player:team_members)
    {
        cout<<player<<endl;
    }
}