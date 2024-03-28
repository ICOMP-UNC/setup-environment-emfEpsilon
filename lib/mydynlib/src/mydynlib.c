#include <stdio.h>
#include <string.h>
#include "mydynlib.h"

/**
 * @brief Simple Messege printing
 * 
 * @param msg Messege to print
 * @return int Return message lenght
 */
int print_from_mydynlib(char* msg)
{
    printf("Hello from my dynamic lib, your messege is: '%s', and return '%ld'\n",msg, strlen(msg));
    return strlen(msg);
}
