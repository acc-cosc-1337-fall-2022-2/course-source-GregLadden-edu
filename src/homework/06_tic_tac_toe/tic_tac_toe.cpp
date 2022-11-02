//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <algorithm>

using std::count;
using std::cout;

bool TicTacToe::game_over()
{
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