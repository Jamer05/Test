#include "Midterm.h"
#include <iostream>

using namespace std;

double Midterm::midterm()
{
    double quiz;
    double exam;

    cout << "\n-----------------------------------" << endl;
    cout<<"\nMidterm"<<endl;
    cout<<"Assignment no.1 score: ";
    cin>>ass_1;
    cout<<"Assignment no.2 score: ";
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
    cout << " " << endl;
    cout << "-----------------------------------" << endl;

    midterm_grade= assignment*0.1 + seat_work*0.2 + quiz*0.3 + exam*0.4;
    cout<<"Your midterm: "<<midterm_grade;

    return midterm_grade;
}
