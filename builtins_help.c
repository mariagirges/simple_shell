#include "shell.h"
/**
 * shell_information - display help information message
 * Return: void;
 */
void shell_information(void)
{
	_putchar("\nShell Version 1.0.0\n\n");
	_putchar("Usage: ./hsh\n\n");
	_putchar("Shell built-in commands:\n\n");
	_putchar("help\t\tDisplay this help information\n\n");
	_putchar("cd [dir]\tChange the current working directory\n\n");
	_putchar("env\t\tDisplay the environment variables\n\n");
	_putchar("setenv\t\tSet an environment variable\n\n");
	_putchar("unsetenv\tUnset an environment variable\n\n");
	_putchar("exit\t\tExit the shell\n\n");
}
