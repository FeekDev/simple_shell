#include "shell.h"

/**
 * mode_interactive - input command line and read
 *
 */

void mode_interactive(void)
{
	char *cmd;
    char **tokens;
	int status = -1;

	init_shell();

	/* Loop infinite */
	do {
		printf("cisfun$ "); /*Print the shell indicator*/

		cmd = read_cmd(); /*read a command*/
        tokens = tokenizer(cmd);/*tokenizer command*/
		/*execute = program_tokens(tokens);*/
		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

        /*avoid memory leaks*/
        free(cmd);

		/*exit status*/
		if (status >= 0)
		{
			exit(status);
		}

	} while (status == -1);
	/*end loop*/
}
