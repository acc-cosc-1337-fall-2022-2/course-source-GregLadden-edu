//h
#include <memory>
#include "tic_tac_toe.h"
#include "tic_tac_toe_data.h"
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H

class TicTacToeManager
{
public:
    TicTacToeManager()=default;
    TicTacToeManager(TicTacToeData &data1);
    ~TicTacToeManager();
    friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
    void save_game(std::unique_ptr<TicTacToe> &b);
    void get_winner_total(int& o, int& w, int& t);

private:
    vector<std::unique_ptr<TicTacToe>> games;
    int x_win=0;
    int o_win=0;
    int ties=0;
    void update_winner_count(string winner);
    TicTacToeData data;
};

#endif