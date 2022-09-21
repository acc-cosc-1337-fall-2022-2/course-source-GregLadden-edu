//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
string get_letter_grade_using_if(int grade)
{
    if(grade<= 100 && grade >= 90){
        return "A";
    } else if (grade<= 89 && grade >= 80 ){
        return "B";
    }
    else if (grade<= 79 && grade >= 70 ){
        return "C";
    }
    else if (grade<= 69 && grade >= 60 ){
        return "D";
    }
    else return "F";
}
string get_letter_grade_using_switch(int grade)
{
    string result;
    switch (grade / 10)
    {
        case 10:case 9:
            result = "A";
            break;
        case 8:
            result = "B";
            break;
        case 7:
            result = "C";
            break;
        case 6:
            result = "D";
            break;
        default:
            result = "F";
    }
    return result;
}
