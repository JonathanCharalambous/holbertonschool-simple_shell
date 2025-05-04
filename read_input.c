#include "main.h"

/**
 * read_input - Handles reading input from stdin, with prompt if interactive.
 * @line: Pointer to the input buffer.
 * @len: Size of the input buffer.
 * @interactive: 1 if shell is interactive, 0 if non-interactive.
 *
 * Return: 0 on success, -1 on failure or EOF.
 */
int read_input(char **line, size_t *len, int interactive)
{
	ssize_t rd;

	if (interactive)
		prompt();

	rd = _getline(line, len);

	if (rd == -1)
	{
		if (interactive)
			putchar('\n');
		return (-1);
	}
	if ((*line)[rd - 1] == '\n')
		(*line)[rd - 1] = '\0';

	return (0);
}
