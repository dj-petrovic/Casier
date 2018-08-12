
#ifndef _SYSTEM_H
#define _SYSTEM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MIN_BYTES 5
#define MAX_BYTES 50


/**
 * prompts user for a input line
 * stores input line as string in heap memory
 * returns char pointer to memory locaiton of stored input
 */
char *getstr(void);

/**
 * prompts user for a input line 
 * converts user input to float point number and stores value in stack memory
 * if convertion is sucssefull returns float value, else returns 0
 */
float get_float(void);


#endif
