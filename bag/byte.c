#include "byte.h"

void 
fromByte( c, b )
byte c, bool b[8]
{
    for ( int i = 0; i < 8; ++i )
        b[i] = (c & (1 << i)) != 0;
}

byte 
toByte( b )
bool b[8]
{
    byte c = 0;
    for (int i = 0; i < 8; ++i)
    {
        if( b[i] )
            c |= 1 << i;
    }
    return c;
}