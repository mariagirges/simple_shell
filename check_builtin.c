#include "shell.h"
/**
 * check_builtin - checks if command is builtin
 * @args: argument of array
 * Return: 1 or 0
 */
int check_builtin(char **args)
{
	if (!args[0])
		return (0);

	if (!_strcmp(args[0], "exit"))
		exit_shell(args);

	else if (!_strcmp(args[0], "env"))
		shell_environ();

	else if (!_strcmp(args[0], "setenv"))
		setenv_shell(args);

	else if (!_strcmp(args[0], "unsetenv"))
		unsetenv_shell(args);

	else if (!_strcmp(args[0], "help"))
		shell_information();

	else if (!_strcmp(args[0], "cd"))
		cd_shell(args);

	else if (!_strcmp(args[0], "clear"))
		clear(args);

	else
		return (0);

	return (1);
}
