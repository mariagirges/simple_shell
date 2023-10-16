#include "shell.h"
/**
 * freeerror - free error
 * @argv: pointer of argument
 * @arg: pointer of argument
 * Return: void
 */
void freeerror(char **argv, char *arg)
{
	int error;

	for (error = 0; argv[error]; error++)
	{
		free(argv[error]);
	}

	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 * freetoken - free memory allocated
 * @pointer: pointer
 * Return: void
 */
void freetoken(char **pointer)
{
	int token;

	for (token = 0; pointer[token]; token++)
	{
		free(pointer[token]);
	}
	free(pointer);
}

/**
 * freepath - free path
 * Return: void
 */
void freepath(void)
{
	if (environ != NULL)
	{
		size_t path;

		path = 0;

		while (environ[path] != NULL)
		{
			if (_strncmp(environ[path], "PATH=", 5) == 0)
			{
				free(environ[path]);
				environ[path] = NULL;
				break;
			}
			path++;
		}
	}
}
