#include "shell.h"
/**
 * shell_information - display help information message
 * Return: void;
 */
void shell_information(void)
{
	write("\nShell Version 1.0.0\n\n");
	write("Usage: ./hsh\n\n");
	write("Shell built-in commands:\n\n");
	write("help\t\tDisplay this help information\n\n");
	write("cd [dir]\tChange the current working directory\n\n");
	write("env\t\tDisplay the environment variables\n\n");
	write("setenv\t\tSet an environment variable\n\n");
	write("unsetenv\tUnset an environment variable\n\n");
	write("exit\t\tExit the shell\n\n");
}
