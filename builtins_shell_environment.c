#include "shell.h"
/**
 * shell_environ - prints all environment
 * Return: void
 */
int shell_environ(void)
{
	int n;

	for (n = 0; environ[n]; n++)
	{
		puts(env[n]);
		_putchar('\n');
	}
	return (0);
}
