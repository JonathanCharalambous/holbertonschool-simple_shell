#include "main.h"

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
