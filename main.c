#include "main.h"

int main(void)
{
	size_t len = 0;
	char *cmd_path = NULL, *args[MAX_ARGS], *line = NULL;
	int status = 0, interactive = isatty(STDIN_FILENO);

	while (1)
	{

		if (read_input(&line, &len, interactive) == -1)
			break;
		
		parse_line(line, args);
		if (args[0] == NULL)
			continue;

		if (command(args, line, status))
			continue;

		cmd_path = find_in_path(args[0]);

		if (!cmd_path)
		{
			fprintf(stderr, "./hsh: 1: %s: not found\n", args[0]);
			status = 127;
			continue;
		}
		
		status = fork_execve(cmd_path, args, line);
	}
	free(line);
	return (status);
}
