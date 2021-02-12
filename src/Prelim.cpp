#include "Prelim.h"
#include <iostream>
using namespace std;

double Prelim::prelim()
{
    double quiz;
    double exam;

    cout<<"Prelim"<<endl;
    cout<<"Assignment no.1 score: ";
    cin>>ass_1;
    cout<<"Assignment no.2 score: ";
    cin>>ass_2;

    assignment=(ass_1+ass_2)*0.1;

    cout<<"Seatwork no.1 score: ";
    cin>>seat_1;
    cout<<"Seatwork no.2 score: ";
    cin>>seat_2;

    seat_work=(seat_1+seat_2)*0.2;
    cout<<"Quiz score: ";
    cin>>quiz;
    cout<<"Exam score: ";
    cin>>exam;

    prelim_grade = assignment*0.1 + seat_work*0.2 + quiz*0.3 + exam*0.4;
    cout<<"Your prelim: "<<prelim_grade;

    return prelim_grade;
}
