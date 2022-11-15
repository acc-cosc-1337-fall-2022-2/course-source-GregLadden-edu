#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

int main()
{
//class object initialization
    TicTacToe game;
    TicTacToeManager manager;

//variable initialization
    string first_player;
    char play_again;
    bool game_on = true;
    bool play_again_invalid_input;
    int position;
    int o, x, t;

    cout<< "Tic Tac Toe\n\n";
    cout<< "Choose Position:\n"
           "1|2|3\n"
           "4|5|6\n"
           "7|8|9\n\n";
    do
    {
        cout << "Player 1: Please choose X or O\n";
        cin >> first_player;

        if(first_player == "X" || first_player == "O") {

            game.start_game(first_player);

            while (!game.game_over()) {
                cout<<game;
                cin>>game;
            }

            cout<<game;
            manager.save_games(game);

            string winner = game.get_winner();
            if (winner == "X") {
                cout << "\nThe winner is " << winner << "!\n";
            } else if (winner == "O") {
                cout << "\nThe winner is " << winner << "!\n";
            } else if (winner == "C") {
                cout << "\nThe game has ended in a tie!\n";
            }

            manager.get_winner_total(o, x, t);
            cout<<"\nCurrent Score Totals:";
            cout<<"\nO Wins: "<<o<<"\n";
            cout<<"X Wins: "<<x<<"\n";
            cout<<"Ties: "<<t<<"\n";

            do {
                cout << "\nWould you like to play again? (Y/N)";
                cin >> play_again;
                if (play_again == 'N' || play_again == 'n') {
                    play_again_invalid_input = false;
                    game_on = false;
                }
                else if (play_again == 'Y' || play_again == 'y') {
                    play_again_invalid_input = false;
                }
                else {
                    play_again_invalid_input = true;
                    cout << "Invalid Input. Try Again.\n";
                }
            } while (play_again_invalid_input);
        }
        else {
            cout<<"Invalid Input. Try Again.\n";
        }
    }
    while(game_on);

    cout << manager;

    return 0;
}