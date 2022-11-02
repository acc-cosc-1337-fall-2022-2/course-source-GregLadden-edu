#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{
    //step 1
    TicTacToe game;
    string first_player = "X";
    //step 2
    game.start_game(first_player);
    //step 3
    for(int i = 1; i <= 8; i++)
    {
        game.mark_board(i);
        REQUIRE(game.game_over() == false);
    }
    game.mark_board(9);
    REQUIRE(game.game_over() == true);
}