#include "shell.h"
/**
 * shell_environ - prints all environment
 * Return: void
 */
int shell_environ(void)
{
	int n;

	for (n = 0; env[n]; n++)
	{
		puts(env[n]);
		write('\n');
	}
	return (0);
}
