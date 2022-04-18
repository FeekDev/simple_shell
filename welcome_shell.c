#include "shell.h"

void init_shell()
{
    char* username = getenv("USER");

    clear();
    printf("\n\n\n\n*****************"
    "*************");
    printf("\n\n\t***Own Shell***");
    printf("\n\tUser is: @%s", username);
    printf("\n\n\n\n*****************"
    "*************");
    printf("\n");
    sleep(1);
}