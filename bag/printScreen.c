#include "printScreen.h"
#include <stdio.h>

void printScreen(int *board, int rows, int cols){
    int i,j;
    for(i = 0; i<rows; i++){
        for(j = 0; j<cols; j++){
            if (board[rows*i + j] == 0)
                putchar('.');
            else
                putchar(board[rows*i + j]+48);
        }
        putchar('\n');
    }
}
