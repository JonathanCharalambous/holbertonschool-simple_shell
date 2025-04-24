#include "main.h"

ssize_t _getline(char **lineptr, size_t *n)
{
	char c, *buffer, *new_buf;
	ssize_t i = 0, j = 0;
	size_t bufsize = 1024;

	if (*lineptr == NULL || *n == 0)
	{
		*lineptr = malloc(bufsize);
		if (!*lineptr)
			return -1;
		*n = bufsize;
	}
	buffer = *lineptr;
	while (1)
	{
		if (read(STDIN_FILENO, &c, 1) != 1)
			return (i == 0) ? -1 : i;
		if (i >= (ssize_t)(*n - 1))
		{
			bufsize *= 2;
			new_buf = malloc(bufsize);
			if (!new_buf)
				return -1;
			for (j = 0; j < i; j++)
				new_buf[j] = buffer[j];
			free(buffer);
			buffer = new_buf;
			*lineptr = buffer;
			*n = bufsize;
		}
		buffer[i++] = c;
		if (c == '\n')
			break;
	}
	buffer[i] = '\0';
	return i;
}
