#include "shell.h"
/**
 * get_environ - find the value of environment
 * @thename: name of environment
 * @Return: the value of environment
 */
char *get_environ(const char *thename)
{
	char **environ;
	size_t name;
	
	name = _strlen(thename);

	for (environ = environ; *environ != NULL; environ++)
	{
		if (_strncmp(*environ, thename, name) == 0 && (*environ)[name] == '=')
			return (&(*environ)[name + 1]);
	}
	return (NULL);
}
