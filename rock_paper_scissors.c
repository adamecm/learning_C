#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

/**
 * Returns the computers move based on random number generator
 */
char random_move(void)
{   
    srand(time(0));
    int random_number = rand() % 3;
    char valid_moves[3] = {'R','P','S'};
    char move = valid_moves[random_number];
    return move;
}

void evaluate_game(char player_move, char computer_move)
{
    int result; // 1 for player win, 2 for computer win, 3 for a tie
    if (player_move == computer_move){
        printf("It's a tie!\n");            
    } else if (((player_move == 'P') && (computer_move == 'R')) || ((player_move == 'S') && (computer_move == 'P')) || ((player_move == 'R') && (computer_move == 'S'))){
       printf("You have won!\n");  
    } else{
        printf("You have lost!\n");
    }
}

int main()
{
char player_move, computer_move, end_game;
do
{
    printf("Select your move - R for Rock, P for Paper, S for Scissors\n");
    scanf(" %c",&player_move);
    player_move = toupper(player_move);

    while (!((player_move == 'R') || (player_move == 'P') || (player_move == 'S'))){
        printf("Please select a valid move - R for Rock, P for Paper, S for Scissors\n");
        scanf(" %c",&player_move);
        player_move = toupper(player_move);
    }
    computer_move = random_move();
    printf("You have played (%c), the computer has played (%c).\n",player_move,computer_move);
    evaluate_game(player_move,computer_move);
    printf("Press 0 to end the game, or press any other key to play again.\n");
    scanf(" %c",&end_game);
} while (end_game != '0');


return 0;
}
