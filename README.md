# SIMPLE SHELL
A simple UNIX command interpreter.\
_short summary of a shell here_

## Process
![cflowchart](https://github.com/user-attachments/assets/6b628811-2377-456f-a7b8-a854e80168e3)

## Usage
Respond to text commands and function calling \
`simple_shell`
+ Display a prompt and wait for the user to type a command. A command line always ends with a new line.
+ The prompt is displayed again each time a command has been executed.
+ The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
+ The command lines are made only of one word. No arguments will be passed to programs.
+ If an executable cannot be found, print an error message and display the prompt again.
+ Handle errors.
+ Handle the “end of file” condition `Ctrl+D`

_insert examples of use here from exercises_\
```
using code block formatting
```

## File descriptions
Files to supporting the `simple_shell`

| File | Synopsis | Description | Return | 
| --- | --- | --- | --- | 
| [`main.h`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/main.h) |  | _**Header file**_
| [`prompt.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/prompt.c) | `void prompt(void);` | _**Shows the shell prompt**_ <br> This function prints a dollar sign and a space ("$ ") to the screen to show the user that the shell is ready for a command. <br> It uses `fflush`(stdout) to make sure the prompt is shown right away. |  This function does not return anything `(void)`. |
|[`parse_line.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/parse_line.c) | `void parse_line(char *line, char **arg);` | _**Splits a line into words (arguments)**_ <br> This function takes a line of text (like a command line) and splits it into separate words using `strtok()` with `DELIM` as the separator. Each word is saved in the arg array. <br> It keeps splitting until there are no more words or until it reaches the maximum number of arguments. The last element of arg is set to `NULL` to mark the end. | This function does not return anything (void). <br> The arguments are stored in the arg array.
|[`command.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/command.c) | `int command(char **arg, char *line, int status);` | _**Handles built-in shell commands**_ <br> |
|[`*find_in_path.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/*find_in_path.c) | `char *find_in_path(char *cmd);` | _**search for a command in the `PATH`**_ <br> find_in_path() checks if the given command has a '/' in it. If it does, it treats the command as a path and returns a duplicate of it. <br> If not, it looks through each directory listed in the PATH environment variable to find an executable file with the same name. <br> If it finds one, it returns the full path as a new string. <br> If the command can't be found or there's an error, it returns `NULL`. | Returns a new string with the full path to the command if found, or NULL if not. |
|[`_getenv.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/_getenv.c) | 
|[`getline.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/_getline.c) |
|[`read_input.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/read_input.c) |
|[`fork_execve.c`](https://github.com/JonathanCharalambous/holbertonschool-simple_shell/blob/main/fork_execve.c) |




## Roadmap
**Advanced  tasks**\
Simple shell 0.1.1  _using our own `getline` function, using buffers, and `static` variables_\
Simple shell 0.2.1  _shell that does not use `strtok`_\
Simple shell 0.4.1  _handling arguments for built in `exit`_\
Simple shell 0.4.2  _handling `ctrl+c` without quitting shell when user inputs `^C`_\
Simple shell 1.0 + _implementing `setenv` and `unsetenv`_\
Simple shell 1.0 + _implementing built in command `cd`_\
Simple shell 1.0 + _handling command separator `;`_\
Simple shell 1.0 + _handling logical operators `&&` and `||`_\
Simple shell 1.0 + _implimenting built in command `alias`_\
Simple shell 1.0 + _handling variables replacement such as `$?` and `$$`_\
Simple shell 1.0 + _handling comments (`#`)_\
Simple shell 1.0 + _implimenting built in command `alias`_\
Simple shell 1.0 + _implementing built in command `help`_\
Simple shell 1.0 + _impementing built in command `history`_\
Simple shell 1.0 + _taking a file as a command line argument_\

## Installation
**Holberton’s Sandbox -** `Ubuntu 22.04`\
\
**Requirements:**
   + Windows 10
   + Chrome 77.0.3865.120 or superior
   + 16GB Memory

**Steps:**
1. Clone respository using
   ```
   https://github.com/JonathanCharalambous/holbertonschool-simple_shell.git
   ```
2. Change directories to simple_shell
   ```
   cd holbertonschool-simple_shell
   ```
3. Compile the files and create an executabe
   ```
   gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
   ```
4. Run the simple shell using the following options:
   + Interactive
   ```
   ./hsh
   ``` 
   + Non-interactive
   ```
   echo "[command][option]" | ./hsh
   ```

## Authors
[Johnathan](https://github.com/JonathanCharalambous)\
[Mat](https://github.com/Mat-26-dot)\
[Marianne](https://github.com/T0ILETR0LL)

## Resources
[Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/900)\
[Basic writing and formatting syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)\
[Linux man pages](https://linux.die.net/man/)

