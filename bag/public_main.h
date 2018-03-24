#ifndef public_main_h
#define public_main_h

//#define DEBUG// for extra printf's#
#define ROWS 12
int STOPER;
int board[ ROWS * ROWS ];
typedef struct{
    int x;
    int y;
} Dir;

typedef struct{
    int x;
    int y;
} Loc;


#endif