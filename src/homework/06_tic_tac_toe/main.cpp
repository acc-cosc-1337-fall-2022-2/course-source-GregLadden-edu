#include <iostream>
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin;
using std::make_unique;

int main()
{
    unique_ptr<TicTacToe> game;
    TicTacToeManager manager;

    string first_player;
    int select = 0;

    while (select == 0)
    {
        string game_selection;
        do
        {
            cout << "Enter 3 for 3x3 Tic Tac Toe\nEnter 4 for 4x4 Tic Tac Toe\n";
            cin >> game_selection;
        }
        while(game_selection != "3" && game_selection != "4");

        if (game_selection == "3")
        {
            game = make_unique<TicTacToe3>();
        }
        else
        {
            game = make_unique<TicTacToe4>();
        }

        cout << "Player One: Choose X or O\n";
        cin >> first_player;

        if (first_player == "X" || first_player == "O")
        {
            game->start_game(first_player);

            do
            {
                cout << *game;
                cin >> *game;
            }
            while (!game->game_over());

            manager.save_game(game);

            int x, o, t;
            manager.get_winner_totals(x,o,t);
            cout << "\nX Wins: " << x << "\n";
            cout << "O Wins: " << o << "\n";
            cout << "Ties: " << t << "\n";

            cout << "Would you like to play again? Press 0 for continue or 1 to Exit\n";
            cin >> select;
        }
        else
        {
            cout << "Invalid entry. Please try again\n";
        }
    }
    while (select != 0)
    {
        cout<<"Thank you for playing!"<<"\n\n";
        break;
    }
    cout<<manager;
    cout<<"new branch"
    return 0;
}