#include "shell.h"

/**
 * mode_non_interactive - run the script
 *
 */

void mode_non_interactive(void)
{
	char *cmd;
	int status = -1;

	do {
		printf("cisfun$ "); /*imprimimos el indicador del shell*/
		cmd = read_cmd(); /*read a command*/
		args = tokenizer(cmd);/*tokenizer command*/
		/*execute = program_tokens(tokens);*/

        /*avoid memory leaks*/
        free(cmd);
		free(args);

		/*exit status*/
		if (status >= 0)
		{
			exit(status);
		}

	} while (status == -1);
}