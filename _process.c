#include "main.h"

/**
 * _process - create new process
 * @args: variable
 *
 * Return: 1 if success, 0 otherwise.
 */

int _process(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid ==  0)
	{
		if (execvp(args[0], args) == -1)
			perror("error in child processes");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		perror("error in parent processes");
	else
	{
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (-1);
}
