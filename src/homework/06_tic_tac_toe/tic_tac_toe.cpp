#include "tic_tac_toe.h"
#include "tic_tac_toe.h"

#include <utility>


ostream& operator << (ostream& out, const TicTacToe& game)
{
    if (game.pegs.size() == 9)
    {
        out << game.pegs[0] << "|" << game.pegs[1] << "|" << game.pegs[2] << "\n"
            << game.pegs[3] << "|" << game.pegs[4] << "|" << game.pegs[5] << "\n"
            << game.pegs[6] << "|" << game.pegs[7] << "|" << game.pegs[8] << "\n";
    }
    else
    {
        out << game.pegs[0] << "|" << game.pegs[1] << "|" << game.pegs[2] << "|" << game.pegs[3] << "\n"
            << game.pegs[4] << "|" << game.pegs[5] << "|" << game.pegs[6] << "|" << game.pegs[7] << "\n"
            << game.pegs[8] << "|" << game.pegs[9] << "|" << game.pegs[10] << "|" << game.pegs[11] << "\n"
            << game.pegs[12] << "|" << game.pegs[13] << "|" << game.pegs[14] << "|" << game.pegs[15] << "\n";
    }
    return out;
}

istream& operator >> (istream& in, TicTacToe& game)
{
    int position;
    cout << "Player " << game.get_player() << " choose position 1-" << game.pegs.size()<< ":";
    in >> position;
    game.mark_board(position);
    return in;
}

TicTacToe::TicTacToe(int size): pegs(size*size, " ")
{
}

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win())
    {
        set_winner();
        return true;
    }
    else if(check_board_full())
    {
        winner = "C";
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    player = std::move(first_player);
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

string TicTacToe::get_winner()
{
    return winner;
}

bool TicTacToe::check_column_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
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
    bool isover;

    if(count (pegs.begin(),pegs.end(), " "))
    {
        isover = false;
    }
    else
    {
        isover = true;
    }

    return isover;
}

void TicTacToe::clear_board()
{
    for(auto & peg : pegs)
    {
        peg = " ";
    }
}