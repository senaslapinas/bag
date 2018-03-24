#include <stdio.h>


int main()
{
    FILE *file;
    file = fopen("board.txt", "r");
    int board[188];
    char c = 0;
    int rows;
    int i;

    for(i = 0;c != EOF; i++)
    {
        c =  getc(file);
        if(c == ' '){
            board[i] = 0;
        }
        else if(c == '\n'){
            rows++;
        }
        else{
            board[i] = 9;
        }
    }
    ///printf("\nfile size = %d\n!",size);
    printf("rows %d\n", rows);
int j;
    for(i = 0; i<rows; i++){
        for(j = 0; j<rows; j++){
            putchar(board[i*rows + j]+48);
        }
        putchar('\n');
    }
    return 0;
}
