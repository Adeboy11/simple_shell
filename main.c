#include "main.h"

/**
 * main - is called from terminal or not
 *
 * Return: 0 on success
 */
int main(void)
{
	if (isatty(STDIN_FILENO) == 1)
		from_terminal();
	else
		not_from_terminal();
	return (0);
}
