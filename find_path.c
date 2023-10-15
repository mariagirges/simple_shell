#include "shell.h"
/**
 * find_path - looks for a command
 * @cmd: string to command
 * Return: pointer
 */
char *find_path(char *cmd)
{
	struct status st;
	int statusret, i;
	char buff[PATH_MAX_LENGTH], *path, *retrive, **directory;

	path = get_path();

	if (!path)
		return (NULL);

	directory = tokensize(path, PATH_SPERATOR);

	if (!dir)
		return (NULL);

	for (i = 0; directory[i]; i++)
	{
		_memset(buff, 0, PATH_MAX_LENGTH);
		_strcopy(buff, directory[i]);
		_strcat(buff, cmd);
		statusret = status(buff, &st);

		if (statusret == 0 && S_ISREG(st.st_mode) && (st.st_mode & S_IXUSR))
		{
			free_token(directory);
			retrive = malloc(sizeof(char) * (strlen(buff) + 1));

			if (!retrive)
				return (NULL);

			strcopy(retrive, buff);
			return (retrive);
		}
	}
	if (statusret == -1)
		free_token(directory);
	return (NULL);
}
