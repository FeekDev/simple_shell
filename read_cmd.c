#include "shell.h"

/**
 * read_cmd - read the string input
 *
 * Return: char*
 */

char *read_cmd(void)
{
	char *string;
	size_t size = 10;

	char **stringptr;

	stringptr = &string;
	string = (char *)malloc(size);

	getline(stringptr, &size, stdin);

	return (string);
}
