#include "main.h"

/**
 * read_stream - read firstline from stream
 *
 * Return: pointer to firstline
 */
char *stream_reader(void)
{
	int buffsize = 1024;
	int i = 0;
	char *fisrtline = malloc(sizeof(char) * buffsize);
	int chars;

	if (firstline == NULL)
	{
		perror("memory allocation failed in stream reader");
		exit(EXIT_FAILURE);
	}
	while (1)
	{
		chars = getchar();
		if (chars == EOF)
		{
			free(firstline);
			exit(EXIT_SUCCESS);
		}
		else if (chars == '\n')
		{
			firstline[i] = '\0';
			return (firstline);
		}
		else
		{
			firstline[i] = character;
		}
		i++;
		if (i >= bufsize)
		{
			bufsize += bufsize;
			firstline = realloc(firstline, bufsize);
			if (firstline == NULL)
			{
				perror("reallocation error in stream reader");
				exit(EXIT_FAILURE);
			}
		}
	}
}
