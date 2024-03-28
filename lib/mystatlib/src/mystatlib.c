#include <stdio.h>
#include <string.h>
#include "mystatlib.h"

/**
 * @brief Simple Messege printing
 * 
 * @param msg Messege to print
 * @return int Return message lenght
 */
int print_from_mystatlib(char* msg)
{
    printf("Hello from my static lib, your message is: '%s', and return '%ld'\n",msg, strlen(msg));
    return strlen(msg);
}
