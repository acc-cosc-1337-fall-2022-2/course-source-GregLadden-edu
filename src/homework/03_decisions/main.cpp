//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{
    int userInput;
    int numberGrade;
    string letterGrade;

    cout <<"Choose which you prefer switch or if statements. \n";
    cout <<"1) If statement. \n";
    cout <<"2) Switch statement. \n";
    cin >> userInput;

    if(userInput < 1 || userInput > 3)
    {
        cout<<"You must enter selections 1-3";
    } else if (userInput == 1){
        cout<<"What is the your number grade? ";
        cin>>numberGrade;
        letterGrade = get_letter_grade_using_if(numberGrade);
        cout<< "You earned a(n): "<< letterGrade;
    } else if(userInput == 2) {
        cout<<"What is the your number grade? ";
        cin>>numberGrade;
        letterGrade = get_letter_grade_using_switch(numberGrade);
        cout<< "You earned a(n): "<< letterGrade;
    } else {
        cout<<"Exit";
    }
	return 0;
}