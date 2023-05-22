#include "main.h"

/**
 * _getline - a function to get a line from stdin
 *
 * Return: pointer to char
 */
char *_getline(void)
{
	char *first_line = NULL;
	size_t buff = 0;

	if (getline(&first_line, &buff, stdin) == -1)
	{
		if (feof(stdin))
		{
			free(first_line);
			exit(EXIT_SUCCESS);
		}
		else
		{
			free(first_line);
			perror("error reading from stdin");
			exit(EXIT_FAILURE);
		}
	}
	return (first_line);
}
