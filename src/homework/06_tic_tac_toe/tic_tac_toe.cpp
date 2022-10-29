#include "tic_tac_toe.h"

char space[3][3] = {{'1','2','3'}, {'4','5','6',}, {'7','8','9'}};
int row;
int column;
char token = 'x';
string player1;
string player2;
bool draw = false;

void displayBoard() {
    cout<< "   |   |   \n";
    cout<<" "<<space[0][0]<<" | "<<space[0][1]<<" | "<<space[0][2]<<" "  "\n";
    cout<< "___|___|___\n";
    cout<< "   |   |   \n";
    cout<<" "<<space[1][0]<<" | "<<space[1][1]<<" | "<<space[1][2]<<" "  "\n";
    cout<< "___|___|___\n";
    cout<< "   |   |   \n";
    cout<<" "<<space[2][0]<<" | "<<space[2][1]<<" | "<<space[2][2]<<" "  "\n";
    cout<< "   |   |   \n";
}

void functionTwo() {
    int digit;

    if(token == 'x'){
        cout<<player1<<"please enter";
        cin>>digit;
    }

    if(token == '0'){
        cout<<player2<<"please enter";
        cin>>digit;
    }

    if(digit < 1 || digit > 9) {
        cout<<"Invalid number. Pick a number between 1-9\n";
    }

    if(digit == 1){
        row = 0;
        column = 0;
    }if(digit == 2){
        row = 0;
        column = 1;
    }if(digit == 3){
        row = 0;
        column = 2;
    }if(digit == 4){
        row = 1;
        column = 0;
    }if(digit == 5){
        row = 1;
        column = 1;
    }if(digit == 6){
        row = 1;
        column = 2;
    }if(digit == 7){
        row = 2;
        column = 0;
    }if(digit == 8){
        row = 2;
        column = 1;
    }if(digit == 9){
        row = 2;
        column = 2;
    }

    if(token == 'x' && space[row][column] != 'x' && space[row][column] != '0') {
        space[row][column] = 'x';
        token = '0';
    } else if(token == '0' && space[row][column] != 'x' && space[row][column] != '0'){
        space[row][column] = '0';
        token = 'x';
    } else {
        cout<<"That space has been taken\n";
        functionTwo();
    }
    displayBoard();
}

bool functionThree(){
    for (int i=0; i < 3; i++) {

        if((space[i][0] == space[i][1] && space[i][0] == space[i][2]) || (space[0][i] == space[1][i] && space[0][i] == space[2][i])){
            return true;
        }

        if((space[0][0] == space[1][1] && space[0][0] == space[2][2]) || (space[0][2] == space[1][1] && space[0][2] == space[2][0])){
            return true;
        }
    }

    for(auto & i : space) {
        for(char j : i){
            if(j != 'x' && j != '0'){
                return false;
            }
        }
    }
    draw = true;
    return false;
}

void displayWinner(){
    if(token == 'x' && !draw){
        cout<<"Congratulations!Player with '0' has won the game\n";
    }
    else if(token == '0' && !draw){
        cout<<"Congratulations!Player with 'X' has won the game\n";
    }
    else {
        cout << "GAME DRAW!!!\n";
    }
}
