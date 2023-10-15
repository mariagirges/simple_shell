#include "shell.h"
/**
 * exec - execute command with arguments
 * @argv: array of arguments
 * Return: the exit status of executed command
 */
int exec(char **argv)
{
	pid_t id;
	int stat = 0;
	char *command_path, *env[2];

	if (argv == NULL || *argv == NULL)
		return (stat);

	if (check_builtin(argv))
		return (stat);

	id = fork();

	if (id < 0)
	{
		printerror("fork");
		return (1);
	}

	if (id == -1)
		printerror(argv[0]), free_tokens(argv), free_last_input();

	if (id == 0)
	{
		env[0] = get_path();
		env[1] = NULL;
		command_path = NULL;
		if (argv[0][0] != '/')
			cmd_path = find_in_path(argv[0]);
		if (cmd_path == NULL)
			cmd_path = argv[0];
		if (exec(command_path, argv, env) == -1)
		{
			printerror(argv[0]), free_tokens(argv), free_last_input();
			exit(EXIT_FAILURE);
		}
	}
	else
		do{
			waitpid(id, &stat, WUNTRACED);
		}
		while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
	return (stat);
}
