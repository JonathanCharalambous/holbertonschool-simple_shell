#include "main.h"

/**
 * command - Handles built-in shell commands like 'exit' and 'env'.
 * @arg: Parsed command arguments.
 * @line: Original input line (used for memory cleanup).
 * @status: Exit status of last executed command.
 *
 * Return: 1 if a built-in command was executed, 0 otherwise.
 */

int command(char **arg, char *line, int status)
{
	int i = 0;

	if (arg[0] == NULL)
		return (1);

	if (strcmp(arg[0], "exit") == 0)
	{
		free(line);
		exit(status);
	}
	if (strcmp(arg[0], "env") == 0)
	{
		for (i = 0; environ[i]; i++)
			printf("%s\n", environ[i]);
		return (1);
	}
	
	return (0);
}
