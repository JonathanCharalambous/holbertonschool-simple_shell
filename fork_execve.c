SYNOPSIS
	int fork_execve(char *cmd_path, char **args, char *line);
 
DESCRIPTION
	This function makes a new process using fork().
      	The child process tries to run the command given by cmd_path with execve().
      	If execve() fails, it prints an error, frees memory, and stops the child.
      	If fork() fails, it prints an error and returns -1.
      	The parent process waits for the child to finish, frees memory, and returns the child's exit status.
 
RETURN VALUE
      	Returns the child's exit status if the command runs okay.
    	Returns -1 if there is an error with fork() or execve()
