#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#ifndef TicTacToe_H
#define TicTacToe_H

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::ostream;
using std::istream;

class TicTacToe
{
    friend ostream& operator << (ostream& out, const TicTacToe& game);
    friend istream& operator >> (istream& in, TicTacToe& game);

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    [[nodiscard]] string get_player() const;
    string get_winner();
    explicit TicTacToe(int size);

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();


private:
    string player;
    string winner;
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();
};

#endif