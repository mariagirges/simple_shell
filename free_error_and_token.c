#include "shell.h"
/**
 * free_error - free error
 * @argv: pointer of argument
 * @arg: pointer of argument
 * Return: void
 */
void free_error(char **argv, char *arg)
{
	int error;

	for (error = 0; argv[error]; error++)
	{
		free(argv[i]);
	}

	free(argv);
	free(arg);
	exit(EXIT_FAIL);
}

/**
 * free_token - free memory allocated
 * @ptr: pointer
 * Return: void
 */
void free_token(char **pointer)
{
	int token;

	for (token = 0; ptr[token]; token++)
	{
		free(pointer[token]);
	}
	free(pointer);
}

/**
 * free_path - free path
 * Return: void
 */
void free_path(void)
{
	if (environ != NULL)
	{
		size_t path;

		path = 0;

		while (environ[i] != NULL)
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
