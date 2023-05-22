#include "main.h"

/**
 * from_terminal - command line interpreter
 *
 * Return: void
 */
void from_terminal(void)
{
	char *first_line;
	char **argz;
	int status = -1;

	do {
		printf("ADEZ$>> ");
		first_line = _getline();
		argz = _strtok(first_line);
		status = execve_args(argz);
		free(first_line);
		free(argz);
		if (status >= 0)
			exit(status);
	} while (status == -1);
}
