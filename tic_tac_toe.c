#include <stdio.h>
void clearInput() ; 
int counter = 1;
int ai_index(){
    return 1;
}
void checkWiner(){

}
int move(int user_input, char board[]) {
    int valid = 0 ;
        while (!valid) {
        printf("Player %c, enter the cell number (1-9): ", (counter == 1 ? 'X' : 'O'));
        int result = scanf("%d", &user_input);

        if (result != 1) {
            printf("Invalid input. Please enter a number between 1 and 9.\n");
            clearInput(); // Clear the garbage
            continue;
        }
    }
    if (user_input < 1 || user_input > 9) {
        printf("Invalid input. Choose a number between 1 and 9.\n");
        return 0;
    }
    if (board[user_input - 1] == 'X' || board[user_input - 1] == 'O') {
        printf("Cell already taken. Try another.\n");
        return 0;
    }

    if (counter == 1) {
        board[user_input - 1] = 'X';
        counter = 2;
    } else {
        board[ai_index() - 1] = 'O';
        counter = 1;
    }

    return 1;
}

void displayBoard(char board[]) {
    for (int i = 0; i < 9; i += 3) {
        printf(" %c | %c | %c \n", board[i], board[i + 1], board[i + 2]);
        if (i < 6)
            printf("---+---+---\n");
    }
}

void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // discard until newline
}

void run(char board[]) {
    int index;
    move(index, board);
    displayBoard(board);
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

    printf("Game over! Thanks for playing.\n");
    return 0;
}
