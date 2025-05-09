#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

#define MAX_ARGS 64
#define DELIM " \t\r\n\a"

extern char **environ;

void prompt(void);
void parse_line(char *line, char **args);
int command(char **args, char *line, int status);
char *find_in_path(char *command);
char *_getenv(const char *name);
ssize_t _getline(char **lineptr, size_t *n);
int read_input(char **line, size_t *len, int interactive);
int fork_execve(char *cmd_path, char **args, char *line);





#endif
