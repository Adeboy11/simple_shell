#include "main.h"

/**
 * _env - prints enviroment variables
 * @args: arguments
 *
 * Return: 1 on success, 0 otherwise
 */

int _env(char **args)
{
	extern char **environ;
	/*char **environment;*/
	int i = 0;
	(void)(**args);

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (-1);
}
