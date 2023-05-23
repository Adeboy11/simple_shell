#include "main.h"

/**
 * not_from_terminal - command interpreter
 *
 * Return: void
 */
void not_from_terminal(void)
{
	char *firstline;
	char **args;
	int status = -1;

	do
	{
		firstline = stream_reader();
		args = _strtok(line);
		status = execve_args(args);
		free(firstline);
		free(args);
		if (status >= 0)
		{
			exit(status);
		}
	}
	while (status == -1);
}
