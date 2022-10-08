#include "func.h"
#include<iostream>

using std::cout;
using std::string;
using std::cin;

int main() 
{
    int users_choice;
    do {
        users_choice = run_menu();
        if(users_choice == 1) {
            string dna_str;
            cout<<"Enter DNA String \n";
            cin>>dna_str;
            cout<<get_gc_content(dna_str);
            cout<<"\n";
        } else if(users_choice == 2){
            string dna_str;
            cout<<"Enter DNA String \n";
            cin>>dna_str;
            cout<<get_dna_complement(dna_str);
            cout<<"\n";
        }
    }
    while(users_choice != 3);
	return 0;
}