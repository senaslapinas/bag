#include "move.h"


int move(int force, int loc_x, int loc_y, int* dir)
{
    int rc, next_loc;
    int next[2];
    next[0] = loc_x + dir[0];
    next[1] = loc_y + dir[1];
    next_loc = board[next[1] * ROWS + next[0]];
    
    if(next[0] >= 0 && next[0] < ROWS && next[1] >= 0 && next[1] < ROWS)
    {
        if(next_loc == 0)
        {
            movement:
            {
            board[next[1] * ROWS + next[0]] = board[loc_y * ROWS + loc_x];
            board[loc_y * ROWS + loc_x] = 0;
            return 0;
            }
        }
        else if( next_loc < force )
        {    
            rc = move(force - next_loc, loc_x + dir[0], loc_y + dir[1] , dir);
            if(rc == 0){
                goto movement;
            }
        }
    }
    return 1;
}