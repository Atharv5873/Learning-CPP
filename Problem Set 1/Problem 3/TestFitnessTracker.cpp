#include<iostream>
#include"FitnessTracker.cpp"
using namespace std;
int main()
{
    FitnessTracker DefaultTracker;// Code For A part
    cout<<"Default Tracker: \nActivity: "<<DefaultTracker.getActivity()<<endl<<"Minutes : "<<DefaultTracker.getMin()<<endl<<"Date : "<<DefaultTracker.getDate()<<endl;
    
    FitnessTracker CurrentTracker("Boxing",175,"13 March 2004");// Code for B part
    cout<<"Current Tracker: \nActivity: "<<CurrentTracker.getActivity()<<endl<<"Minutes : "<<CurrentTracker.getMin()<<endl<<"Date : "<<CurrentTracker.getDate()<<endl;
    return 0;
}
