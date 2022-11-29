#include "tic_tac_toe_3.h"


bool TicTacToe3::check_column_win()
{
    bool return_value=false;
    if((pegs[0]=="X"&&pegs[3]=="X"&&pegs[6]=="X")||(pegs[0]=="O"&&pegs[3]=="O"&&pegs[6]=="O"))
        return_value= true;
    else if((pegs[1]=="X"&&pegs[4]=="X"&&pegs[7]=="X")||(pegs[1]=="O"&&pegs[4]=="O"&&pegs[7]=="O"))
        return_value= true;
    else if((pegs[2]=="X"&&pegs[5]=="X"&&pegs[8]=="X")||(pegs[2]=="O"&&pegs[5]=="O"&&pegs[8]=="O"))
        return_value= true;
    return return_value;
}

bool TicTacToe3::check_row_win()
{
    bool return_value=false;
    if((pegs[0]=="X"&&pegs[1]=="X"&&pegs[2]=="X")||(pegs[0]=="O"&&pegs[1]=="O"&&pegs[2]=="O"))
        return_value= true;
    else if((pegs[3]=="X"&&pegs[4]=="X"&&pegs[5]=="X")||(pegs[3]=="O"&&pegs[4]=="O"&&pegs[5]=="O"))
        return_value= true;
    else if((pegs[6]=="X"&&pegs[7]=="X"&&pegs[8]=="X")||(pegs[6]=="O"&&pegs[7]=="O"&&pegs[8]=="O"))
        return_value= true;
    return return_value;
}

bool TicTacToe3::check_diagonal_win()
{
    bool return_value=false;
    if((pegs[0]=="X"&&pegs[4]=="X"&&pegs[8]=="X")||(pegs[0]=="O"&&pegs[4]=="O"&&pegs[8]=="O"))
        return_value= true;
    else if((pegs[6]=="X"&&pegs[4]=="X"&&pegs[2]=="X")||(pegs[6]=="O"&&pegs[4]=="O"&&pegs[2]=="O"))
        return_value= true;
    return return_value;
}