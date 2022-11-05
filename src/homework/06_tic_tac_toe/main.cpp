#include "tic_tac_toe.h"
#include <iostream>

using
        std::cout,
        std::cin;


int main()
{
    TicTacToe game;

    string first_player;
    int position;
    int space = 0;

    cout << "Tic Tac Toe\n";
    cout << "Player 1: Choose X or O\n";
    cin >> first_player;
    game.start_game(first_player);
    display_board_instructions();

    while(space == 0)
    {
        do
        {
            cout << "Player \'" << game.get_player() << "\' take your turn (Choose position on board)\n";
            game.display_board();
            cin >> position;
            game.mark_board(position);
        }
        while(!game.game_over());

        game.display_board();
        game.game_over();
//        game.display_board();
        cout<<"\n";
        cout << "Would you like to play again?\nPress 0: Yes\nPress 1: No\n";
        cin >> space;
        if(space == 0)
        {
            game.start_game(first_player);
        }
    }

    return 0;
}