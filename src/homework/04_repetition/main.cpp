//write include statements
#include<iostream>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
    int users_choice;
    do {
        users_choice = run_menu();
        if(users_choice == 1) {
            int user_num;
            cout<<"enter a number.\n";
            cin>>user_num;
            cout<<factoral(user_num);
            cout<<"\n";
        } else if (users_choice == 2) {
            int user_num1;
            int user_num2;
            cout<<"Enter two numbers.\n";
            cin>>user_num1;
            cin>>user_num2;
            cout<<gcd(user_num1, user_num2);
            cout<<"\n";
        }
    }
    while(users_choice != 3);

	return 0;
}