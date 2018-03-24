#ifndef my_timer_h
#define my_timer_h

#include <time.h>

#define FRAMES 16                  // frames per second
#define MICRO 1000000             //   1 sec to MICROsec
#define NANO  1000000000           //  1 sec to NANOsec
#define NANO_TO_MICRO NANO / MICRO // 1 nanosec to microsec
#define FRAME_DELAY MICRO / FRAMES // delay of one frame in mircosec

struct timespec tm;
#define get_time( t )  clock_gettime( CLOCK_REALTIME, &tm );
                        unsigned long t = ( tm.tv_nsec / NANO_TO_MICRO ); 

#endif