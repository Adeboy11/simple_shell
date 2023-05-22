#include "main.h"

/**
 * _strtok - split a string into multiple strings
 * @strings: variable string
 *
 * Return: pointer to the new array
 */
char **_strtok(char *strings)
{
	int buffer_size = 64;
	int i = 0;
	char **tokenizer = malloc(buffer_size * sizeof(char *));
	char *token;

	if (!tokenizer)
	{
		perror("fails to allocate memory");
		exit(EXIT_FAILURE);
	}
	token = strtok(strings, DELIM);
	while (token != NULL)
	{
		if (token[0] == '#')
		{
			break;
		}
		tokenizer[i] = token;
		i++;
		if (i >= buffer_size)
		{
			buffer_size += buffer_size;
			tokenizer = realloc(tokenizer, buffer_size * sizeof(char *));
			if (!tokenizer)
			{
				perror("fails to reallocate memory");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, DELIM);
	}
	tokenizer[i] = NULL;
	return (tokenizer);
}
