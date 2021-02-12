#include "Final.h"
#include <iostream>

using namespace std;

double Final::finals()
{
    double quiz;
    double exam;

    cout << "\n-----------------------------------" << endl;

    //finals
    cout<<"Finals"<<endl;
    cout<<"Assignment1 score: ";
    cin>>ass_1;
    cout<<"Assignment2 score: ";
    cin>>ass_2;

    assignment=(ass_1+ass_2)*0.1;

    cout<<"Seatwork1 score: ";
    cin>>seat_1;
    cout<<"Seatwork2 score: ";
    cin>>seat_2;

    seat_work=(seat_1+seat_2)*0.2;
    cout<<"Quiz score: ";
    cin>>quiz;
    cout<<"Exam score: ";
    cin>>exam;

    final_var= assignment*0.1 + seat_work*0.2 + quiz*0.3 + exam*0.4;

    return final_var;

}
