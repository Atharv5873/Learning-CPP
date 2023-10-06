#include <iostream>
using namespace std;

class Team {
private:
    string highSchoolName;
    string sport;
    string teamName;

public:
    static string MOTTO;
    
    Team(string highSchoolName, string sport, string teamName) {
        this->highSchoolName = highSchoolName;
        this->sport = sport;
        this->teamName = teamName;
    }
    
    string getSchoolName() {
        return this->highSchoolName;
    }
    
    string getSports() {
        return this->sport;
    }
    
    string getTeamname() {
        return this->teamName;
    }
};


string Team::MOTTO = "sportsmanship!!!";