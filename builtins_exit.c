#include "shell.h"
/**
 * exit_shell - exit
 * args: array of arguments
 * Return: void
 */
void exit_shell(char **args)
{
	int stat = 0;

	if (args[1] != NULL)
		stat = _atoi(args[1]);

	free_tokens(args);
	free_last_input();
	exit(stat);
}
