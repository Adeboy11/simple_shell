#include "main.h"

/**
 * _exit - exits shell
 * @args: void args
 *
 * Return: 0 terminate process
 */
int _exitf(char **args)
{
	if (args[1])
	{
		return (atoi(args[1]));
	}
	else
	{
		return (0);
	}
}
