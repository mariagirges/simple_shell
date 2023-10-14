#include "shell.h"
/**
 * shell_information - display help information message
 * Return: void;
 */
void shell_information(void)
{
	printstr("\nShell Version 1.0.0\n\n");

	printstr("Usage: ./hsh\n\n");

	printstr("Shell built-in commands:\n\n");

	printstr("help\t\tDisplay this help information\n\n");

	printstr("cd [dir]\tChange the current working directory\n\n");

	printstr("env\t\tDisplay the environment variables\n\n");

	printstr("setenv\t\tSet an environment variable\n\n");

	printstr("unsetenv\tUnset an environment variable\n\n");

	printstr("exit\t\tExit the shell\n\n");
}
