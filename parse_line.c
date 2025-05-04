#include "main.h"

/**
 * parse_line - Tokenizes a command line into arguments.
 * @line: The input command line.
 * @arg: Array to store tokenized arguments.
 */

void parse_line(char *line, char **arg)
{
	int i = 0;
	char *token = strtok(line, DELIM);
	while (token != NULL && i < MAX_ARGS - 1)
	{
		arg[i++] = token;
		token = strtok(NULL, DELIM);
	}

	arg[i] = NULL;
}
