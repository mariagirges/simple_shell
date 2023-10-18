#include "shell.h"
/**
 * promp_line_interpreter - print prompt line interpreter
 * Return: void
 */
void prompt_line_interpreter(void)
{
	printstr(PROMPT);
	fflush(stdout);
}
