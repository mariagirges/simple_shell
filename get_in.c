#include "shell.h"
/**
 * get_in - read input
 * Return: void
 */
void *get_in(void)
{
	static char buff[BUFFER_SIZE];
	static int buff_pos, buff_size;
	char *input_string = NULL;
	char curr_char;
	int input_length = 0;

	while (1)
	{
		if (buff_pos >= buff_size)
		{
			buff_size = read(STDIN_FILENO, buff, BUFFER_SIZE);
			buff_pos = 0;
			if (buff_size == 0)
				return (input_string);
			else if (buff_size < 0)
			{
				perror("read");
				return (NULL);
			}
		}
		curr_char = buff[buff_pos];
		buff_pos++;
		if (curr_char == '\n')
		{
			input_string = realloc(input_string, input_length + 1);
			input_string[input_length] = '\0';
			return (input_string);
		}
		else
		{
			input_string = realloc(input_string, input_length + 1);
			input_string[input_length] = curr_char;
			input_length++;
		}
	}
}
