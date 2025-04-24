#include "main.h"

int fork_execve(char *cmd_path, char **args, char *line)
{
	pid_t pid = fork();
	int wstatus;

	if (pid == 0)
	{
		execve(cmd_path, args, environ);
		perror("execve");
		free(cmd_path);
		free(line);
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("fork");
		return (-1);
	}
	else
	{
		waitpid(pid, &wstatus, 0);
		free(cmd_path);
		if (WIFEXITED(wstatus))
			return (WEXITSTATUS(wstatus));
	}
	return (-1);
}
