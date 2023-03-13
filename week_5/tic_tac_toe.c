// Nicole, Week 5 23T1
// Tutorial demo code for 2D arrays

#include <stdio.h>
#include <string.h>

#define SIZE 5
#define TRUE 1
#define FALSE 0

int did_player_win(char player, char board[SIZE][SIZE]);

int main(void) {
    char no_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {'X', ' ', ' ', ' ', 'O'},
    };

    char x_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'X', 'O', 'O', 'O'},
        {' ', 'X', ' ', ' ', 'O'},
    };
    char o_wins_board[SIZE][SIZE] = {
        {'O', 'X', ' ', ' ', 'X'},
        {' ', 'X', ' ', ' ', ' '},
        {' ', 'X', 'O', ' ', ' '},
        {'O', 'O', 'O', 'O', 'O'},
        {'X', 'X', ' ', ' ', 'O'},
    };

    if (did_player_win('X', no_wins_board) == 1) {
        printf("X Won This Board!\n");
    } else if (did_player_win('O', no_wins_board) == 1) {
        printf("O Won This Board!\n");
    } else {
        printf("Nobody has won this board!\n");
    }
    
}

// 5 in a row wins
// returns 1 if player won
// returns 0 if player lost
// player = 'O' or 'X' ,    SIZE = 5
int did_player_win(char player, char board[SIZE][SIZE]) {

    // what ways can a player win?
}