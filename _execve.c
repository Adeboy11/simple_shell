#include "main.h"

/**
 * execve_args - check to see built in processes
 * @args: flags
 *
 * Return: 1 on sucess, 0 otherwise
 */

int execve_args(char **args)
{
	char *func_list[] = { "cd", "env", "help", "exit" };

	int (*func[])(char **) = { &_cd, &_env, &_help, &_exitf };

	unsigned long int i = 0;

	if (args[0] == NULL)
		return (-1);
	for (; i < sizeof(func_list) / sizeof(char *); i++)
	{
		if (strcmp(args[0], func_list[i]) == 0)
			return ((*func[i])(args));
	}
	return (_process(args));
}
