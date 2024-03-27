#include <stdio.h>
#include "greetings.h"
#include "mydynlib.h"
#include "mystatlib.h"

/**
 * @brief Greet the user
 * 
 */
int main(int argc, char* argv[])
{
    printf("Hello from main file!\n");
    greetings();
    print_from_mystatlib("Messege from main to mystatlib");
    print_from_mydynlib("Messege from main to mydynlib");
    return 0;
}