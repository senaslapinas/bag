#include "main.h"
#include "public_main.h"


int dir[2];
int loc[2] = {5, 5};



int main(int argc, char ** argv)
{
    int rc;
    //input init
    pthread_t i_thread; //reminder! for proper attr and return code
    pthread_create(&i_thread, NULL, keyLoop, (void *)dir);

    //timer init
    unsigned long t_before,t_after;
    //main loop
    board[loc[1]*ROWS + loc[0]] = 5;
    board[17] = 2;
    board[15] = 1;
    board[14] = 1;
    board[24] = 1;
    board[23] = 1;
    board[22] = 8;
    board[54] = 2;
    board[44] = 3;
    board[21] = 34;
    board[20] = 1;
    board[33] = 22;
    board[45] = 4;

    for(;;)
    {
        
        
        ///start of game processes
        if(STOPER)
        {
            get_time( t_before );
            rc = move(board[loc[1]*ROWS + loc[0]], loc[0], loc[1], dir);
            if(rc==0){
                loc[0] = loc[0] + dir[0];
                loc[1] = loc[1] + dir[1];
            }
            ///end of game processes
            clearScreen();
            printScreen(board, ROWS, ROWS);
            printf("dir :x = %d; y = %d\n", dir[0], dir[1]);
            printf("loc :x = %d; y = %d\n", loc[0], loc[1]);
            usleep(30000);
            get_time( t_after );
            usleep( FRAME_DELAY - (t_before - t_after) );//wait frame delay minus proccessing delay so as whole it would be frame delay
            STOPER = 0;
        }
    }

    printf("exited from main");
    return 0;
}

