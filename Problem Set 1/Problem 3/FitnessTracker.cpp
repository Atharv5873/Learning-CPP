#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class FitnessTracker {
private:
    string activity;
    int min;
    string date;

public:
    FitnessTracker() {//Code for A Part
        activity = "Running";
        min = 0;
        date="1 January 2023" ;
    }

    FitnessTracker(string activity, int min, string date) {// Code for B part
        this->activity = activity;
        this->min = min;
        this->date = date;
    }

    string getActivity() {
        return activity;
    }

    int getMin() {
        return min;
    }

    string getDate() {
        return date;
    }
};
