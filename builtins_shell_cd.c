#include "shell.h"
/**
 * cd_shell - change the current working directory of shell
 * @args: arrguments of array
 * Return: void
 */
void cd_shell(char **args)
{
	char *directory = args[1];
	int ret;

	if (directory == NULL)
	{
		directory = _getenv("HOME");
		if (directory == NULL)
		{
			_puts("cd: Not found home directory\n");
			return;
		}
	}
	ret = chdir(directory);
	if (ret == -1)
		perror("cd");
}
