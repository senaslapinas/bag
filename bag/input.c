#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void * keyLoop(void* directions)
{
    int *dir = (int*)(directions);
    int *x = &dir[0];//adress of global x dir
    int *y = &dir[1];//adress of global y dir
    char c;
    #ifdef DEBUG
    printf("To move press < a b c d > or < q > to quit\n");
    #endif
    for(;;)
    {        
        if(kbhit())
        {
            c = getch();

            if( c == 'q'){
                #ifdef DEBUG
                printf("\n\t~~~bye~~~\n");
                #endif
                exit(0); // exit program 
            }
            else
            {
                if     ( c == 'w' ){ *y =-1; }
                else if( c == 's' ){ *y = 1; }
                else               { *y = 0; }

                if     ( c == 'a' ){ *x =-1; }
                else if( c == 'd' ){ *x = 1; }
                else               { *x = 0; }
            }
            STOPER = 1;
            #ifdef DEBUG
            printf("x = %d, y = %d\n", *x, *y);
            #endif
        }
    }
}
