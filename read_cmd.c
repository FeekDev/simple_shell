#include "shell.h"

char *read_cmd(void)
{
    char *string;
    size_t size = 10;

    char **stringptr;

    stringptr = &string;
    string = (char *)malloc(size);

    getline(stringptr, &size, stdin);

    return string;
}