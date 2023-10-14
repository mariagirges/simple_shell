#include "shell.h"
/**
 * printstr - print string
 * @str: string that printed
 * Return: void
 */
void printstr(char *str)
{
	size_t l;
	ssize_t numberwritten;

	l = _strlen(str);
	numberwritten = write(STDOUT_FILENO, str, l);

	if (numberwritten == -1)
		perror("write");
}

/**
 * printerror - prints an error message
 * @error: error message that printed
 * Return: void
 */
void printerror(char *error)
{
	size_t l, numberwritten;

	l = _strlen(error);
	numberwritten = write(STDERR_FILENO, error, l);

	if (numberwritten == -1)
		perror("write");
}
