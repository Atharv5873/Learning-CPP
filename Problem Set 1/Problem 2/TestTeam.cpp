    #include "Team.cpp"
    using namespace std;

    int main()
    {
        Team t1("Our Lady School","Boys Football","Siddu FC");
        Team t2("Kullu Valley School","Truck Racing","KV Truckers");
        Team t3("Day Star School","ESports","Pdo Gaming");

        cout<<"Team 1:"<<endl;
        cout<<"HighName: "<<t1.getSchoolName()<<endl;
        cout<<"Sprts: "<<t1.getSports()<<endl;
        cout<<"Team Name: "<<t1.getTeamname()<<endl;
        cout << "Motto: " << Team::MOTTO << endl;
        cout<<endl;

        cout<<"Team 2:"<<endl;
        cout<<"HighName: "<<t2.getSchoolName()<<endl;
        cout<<"Sprts: "<<t2.getSports()<<endl;
        cout<<"Team Name: "<<t2.getTeamname()<<endl;
        cout << "Motto: " << Team::MOTTO << endl;
        cout<<endl;

        cout<<"Team 3:"<<endl;
        cout<<"HighName: "<<t3.getSchoolName()<<endl;
        cout<<"Sprts: "<<t3.getSports()<<endl;
        cout<<"Team Name: "<<t3.getTeamname()<<endl;
        cout << "Motto: " << Team::MOTTO << endl;
        cout<<endl;

    }