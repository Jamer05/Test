#include<iostream>
#include<cstdlib>
#include<string>
#include "Prelim.h"
#include "Midterm.h"
#include "Final.h"

using namespace std;

int main()
{
    double finals;
    double grade;
    string name;
    string course;
    string section;
    string subject;
    Prelim prelim;
    Midterm midterm;
    Final final_var;

    cout<<"Your name: ";
    cin>>name;
    cout<<"Course: ";
    cin>>course;
    cout<<"Section: ";
    cin>>section;
    cout<<"Subject: ";
    cin>>subject;

    cout << "-----------------------------------" << endl;

    prelim.prelim();
    midterm.midterm();
    final_var.finals();

    cout<<"Your finals: ";
    cin>>finals;

    grade= (prelim.prelim_grade*0.3) + (midterm.midterm_grade*0.3) + (final_var.final_var*0.4);
    cout << "\n-----------------------------------" << endl;
    cout<<"General Average: " <<grade;
    return EXIT_SUCCESS;
}
