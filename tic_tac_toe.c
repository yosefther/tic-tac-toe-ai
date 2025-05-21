#include <stdio.h>
#include <stdlib.h>
#include "tic_tac_toe.h"

int counter = 1;

void clearInput() {
    //Fix latter 
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // discard garbage input
}

void displayBoard(char board[]) {
    for (int i = 0; i < 9; i += 3) {
        printf(" %c | %c | %c \n", board[i], board[i + 1], board[i + 2]);
        if (i < 6) printf("---+---+---\n");
    }
}
//ai_index() => just for testing 
int ai_index(char board[]) {
    for (int i = 0; i < 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return i + 1;
        }
    }
    return 1; // fallback
}

int move(int user_input, char board[]) {
    if (counter == 1) {
        int valid = 0;
        while (!valid) {
            printf("Player X, enter the cell number (1-9): ");
            int result = scanf("%d", &user_input);
            if (result != 1) {
                printf("Invalid input. Please enter a number.\n");
                clearInput();
                continue;
            }

            if (user_input < 1 || user_input > 9 || board[user_input - 1] == 'X' || board[user_input - 1] == 'O') {
                printf("Invalid or taken cell. Try again.\n");
            } else {
                board[user_input - 1] = 'X';
                valid = 1;
            }
        }
        counter = 2;
    } else {
        int ai = ai_index(board);
        printf("AI (O) plays at cell %d\n", ai);
        board[ai - 1] = 'O';
        counter = 1;
    }
    return 1;
}

void checkWinner(char board[]) {
    int winCombos[8][3] = {
        {0,1,2}, {3,4,5}, {6,7,8},
        {0,3,6}, {1,4,7}, {2,5,8},
        {0,4,8}, {2,4,6}
    };

    for (int i = 0; i < 8; i++) {
        int a = winCombos[i][0];
        int b = winCombos[i][1];
        int c = winCombos[i][2];

        if (board[a] == board[b] && board[b] == board[c]) {
            printf("\nPlayer %c wins!\n", board[a]);
            exit(0);
        }
    }
}

void run(char board[]) {
    int dummy = 0;
    move(dummy, board);
    displayBoard(board);
    checkWinner(board);
}

int main() {
    char board[9] = {'1','2','3','4','5','6','7','8','9'};
    int turns = 0;

    printf("Welcome to Tic-Tac-Toe!\n");
    displayBoard(board);

    while (turns < 9) {
        run(board);
        turns++;
    }

    printf("\nIt's a draw! Thanks for playing.\n");
    return 0;
}
