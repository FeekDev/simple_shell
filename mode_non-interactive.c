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

		if (strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		/*exit status*/
		if (status >= 0)
		{
			exit(status);
		}

	} while (status == -1);
}