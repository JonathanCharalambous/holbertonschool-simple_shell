find_in_path(3) - search for a command in the PATH

SYNOPSIS
char *find_in_path(char *cmd);

DESCRIPTION
find_in_path() checks if the given command has a '/' in it. If it does, 
it treats the command as a path and returns a duplicate of it. 
If not, it looks through each directory listed in the PATH environment 
variable to find an executable file with the same name. 
If it finds one, it returns the full path as a new string. 
If the command can't be found or there's an error, it returns NULL.

RETURN VALUE
Returns a new string with the full path to the command if found, or NULL if not.
