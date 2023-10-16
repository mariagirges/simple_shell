#include "shell.h"
/**
 * exit_shell - exit
 * @args: array of arguments
 * Return: void
 */
void exit_shell(char **args)
{
	int stat = 0;

	if (args[1] != NULL)
		stat = _atoi(args[1]);

	freetoken(args);
	free_input();
	exit(stat);
}
