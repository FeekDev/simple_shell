#include "shell.h"

int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
	{
		mode_interactive();
	}
	else
	{
		mode_non_interactive();
	}

	return (0);
}
