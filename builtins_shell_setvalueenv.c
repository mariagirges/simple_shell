#include "shell.h"
/**
 * setvalueenv - set value for shell environment
 * @args: array of arguments
 * Return: 0
 */
int setenv(char **args)
{
	char *n, *v

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("setenv VARIABLE VALUE");
		return (-1);
	}
	n = args[1];
	v = args[2];
	if (setenv(name, value, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}
	return (0);
}

/**
 * unsetenv - Remove an environment variable
 * @args: argument of array
 * Return: 0 or -1
 */
int unsetenv(char **args)
{
	char *n;

	if (args[1] == NULL)
	{
		_puterror("unsetenv VARIABLE");
		return (-1);
	}
	n = args[1];
	if (unsetenv(n) != 0)
	{
		_puterror("unsetenv");
	}
	return (0);
}
