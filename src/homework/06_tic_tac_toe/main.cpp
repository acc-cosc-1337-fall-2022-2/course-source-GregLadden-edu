#include<iostream>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;

int main() 
{
    do{
        displayBoard();
        functionTwo();
        functionThree();
    }while(!functionThree());

    displayWinner();

	return 0;
}