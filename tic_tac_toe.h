#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

void clearInput();
void displayBoard(char board[]);
int move(int user_input, char board[]);
int ai_index();
void run(char board[]);
void checkWinner(char board[]);

#endif
