#include "main.h"

/**
 * _cd - changes the working dir
 * @args: directory
 *
 * Return: 1 one success, 0 otherwise.
 */
int _cd(char **args)
{
	if (args[1] == NULL)
	{
		perror("expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("error in own_cd.c: changing dir\n");
		}
	}
	return (-1);
}
