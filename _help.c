#include "main.h"

/**
 * _help - print help
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */
int _help(char **args)
{
	char *_func_list[] = { "cd", "env", "help", "exit" };
	unsigned long int i = 0;
	(void)(**args);

	printf("\n man page for commands \n");
	printf("Enter a command and hit enter\n");
	printf("commands:\n");
	for (; i < sizeof(_func_list) / sizeof(char *); i++)
	{
		printf("  --> %s\n", _func_list[i]);
	}
	printf("Use the man page for more info.\n\n");
	return (-1);
}
