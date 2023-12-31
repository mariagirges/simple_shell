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
		directory = get_environ("HOME");
		if (directory == NULL)
		{
			printstr("cd: Not found home directory\n");
			return;
		}
	}
	ret = chdir(directory);
	if (ret == -1)
		perror("cd");
}
