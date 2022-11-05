//h
#include <iostream>
#include <string>
#include <vector>

#ifndef TicTacToe_H
#define TicTacToe_H

using std::string;
using std::vector;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    void display_board() const;
    static string get_winner(string winner);

private:
    vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};
    string player;
    string winner;
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();
    bool check_diagonal_win();
    bool check_row_win();
    bool check_column_win();



};

#endif



//////////////////EXTRA FUNCTIONS//////////////////////////

void display_board_instructions();