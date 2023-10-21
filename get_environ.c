#include "shell.h"
/**
 * get_environ - find the value of environment
 * @thename: name of environment
 * Return: the value of environment
 */
char *get_environ(const char *thename)
{
	char **env;
	size_t name;

	name = _strlen(thename);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, thename, name) == 0 && (*env)[name] == '=')
			return (&(*environ)[name + 1]);
	}
	return (NULL);
}
