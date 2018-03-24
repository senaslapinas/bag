#ifndef BYTE_H
#define BYTE_H

#include <stdbool.h>
typedef unsigned char byte;

void fromByte( byte, bool b[8] );
byte toByte( bool b[8] );

#endif