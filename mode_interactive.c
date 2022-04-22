#include "shell.h"

/**
 * main - the main function
 *
 * Return: int
 */

void mode_interactive()
{
	char *cmd;
    char **tokens;

	init_shell();

	do {
		printf("cisfun$ "); /*imprimimos el indicador del shell*/

		cmd = read_cmd(); /*read a command*/
        tokens = tokenizer(cmd);
		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		if (cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue; /*if escape line, continue prompt*/
		}

        /*avoid memory leaks*/
        free(cmd);

	} while (1);


	exit(EXIT_SUCCESS);
}