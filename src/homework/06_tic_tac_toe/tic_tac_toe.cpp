//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <algorithm>

using std::count;
using std::cout;

bool TicTacToe::check_row_win() {
    string x = "X";
    string o = "O";

    if(pegs[0] == x && pegs[1] == x && pegs[2] == x) {
        return true;
    }
    if(pegs[0] == o && pegs[1] == o && pegs[2] == o) {
        return true;
    }
    if(pegs[3] == x && pegs[4] == x && pegs[5] == x) {
        return true;
    }
    if(pegs[3] == o && pegs[4] == o && pegs[5] == o) {
        return true;
    }
    if(pegs[6] == x && pegs[7] == x && pegs[8] == x) {
        return true;
    }
    if(pegs[6] == o && pegs[7] == o && pegs[8] == o) {
        return true;
    }

    return false;
}

bool TicTacToe::check_column_win() {
    string x = "X";
    string o = "O";

    if(pegs[0] == x && pegs[3] == x && pegs[6] == x) {
        return true;
    }
    if(pegs[0] == o && pegs[3] == o && pegs[6] == o) {
        return true;
    }
    if(pegs[1] == x && pegs[4] == x && pegs[7] == x) {
        return true;
    }
    if(pegs[1] == o && pegs[4] == o && pegs[7] == o) {
        return true;
    }
    if(pegs[2] == x && pegs[5] == x && pegs[8] == x) {
        return true;
    }
    if(pegs[2] == o && pegs[5] == o && pegs[8] == o) {
        return true;
    }

    return false;
}

bool TicTacToe::check_diagonal_win() {
    string x = "X";
    string o = "O";

    if(pegs[0] == x && pegs[4] == x && pegs[8] == x) {
        return true;
    }
    if(pegs[0] == o && pegs[4] == o && pegs[8] == o) {
        return true;
    }
    if(pegs[6] == x && pegs[4] == x && pegs[2] == x) {
        return true;
    }
    if(pegs[6] == o && pegs[4] == o && pegs[2] == o) {
        return true;
    }
    if(pegs[2] == x && pegs[5] == x && pegs[8] == x) {
        return true;
    }
    if(pegs[2] == o && pegs[5] == o && pegs[8] == o) {
        return true;
    }

    return false;
}

void TicTacToe::set_winner() {
    if(player == "X"){
        winner = "0";
    } else {
        winner = "X";
    }
}

string TicTacToe::get_winner(std::string winner) {
    return winner;
}

bool TicTacToe::game_over()
{
    if(check_row_win()){
        set_winner();
        winner = get_winner(winner);
        cout<<winner<<" is the winner\n";
        return true;
    }
    if(check_column_win()){
        set_winner();
        winner = get_winner(winner);
        cout<<winner<<" is the winner\n";
        return true;
    }
    if(check_diagonal_win()){
        set_winner();
        winner = get_winner(winner);
        cout<<winner<<" is the winner\n";
        return true;
    }

    if (check_board_full()){
//        set_winner();
        winner = "C";
        cout<<winner<<" - Looks like we have a cats game.\n";
        return true;
    }
        return check_board_full();

}

void TicTacToe::start_game(string first_player)
{
    if (first_player == "X" || first_player == "O")
    {
        player = first_player;
    }
    else
    {
        cout << "Invalid Entry. Defaulting Player 1 to 'X'\n";
        first_player = "X";
        player = first_player;
    }

    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::display_board() const
{

    for(int i = 0; i < pegs.size(); i++)
    {
        cout << pegs[i];
        if(i == 2 || i == 5)
        {
            cout << '\n';
            cout<<"_________";
            cout<<"\n";
        } else if(i == 8)
        {
            cout << '\n';
        }
        else
        {
            cout << " | ";
        }
    }
    cout << '\n';
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    bool isOver;
    if(std::count(pegs.begin(), pegs.end(), " "))
    {
        isOver = false;
    }
    else
    {
        isOver = true;
    }
    return isOver;
}

void TicTacToe::clear_board()
{
    for(auto& peg : pegs)
    {
        peg = " ";
    }
}

//////////////////EXTRA FUNCTIONS//////////////////////////

void display_board_instructions()
{
    cout << "\nValid Board Positions\n";
    cout << "1|2|3\n";
    cout << "4|5|6\n7|8|9\n";
}