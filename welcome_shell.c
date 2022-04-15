#include "shell.h"

void init_shell()
{
    clear();
    printf("\n\n\n\n*****************");
    printf("\n\n\t***Team Sheall***");
    char *username = getenv("USER");
    printf("\nUser is: %s", username);
    printf("\n");
    sleep(1)
    clear();
}