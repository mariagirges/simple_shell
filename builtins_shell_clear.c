#include "shell.h"
/**
 * clear - clears the terminal
 * @args: array of arguments
 * Return: 1 or 0
 */
int clear(char **args)
{
	(void)args;
	printstr("\033[2J\033[H");
	return (1);
}
