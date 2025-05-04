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
_we can even do checkbox style_
```
using code block formatting
```

## Roadmap
_advance tasks we haven't gotten up to_

## Installation
**Holberton’s Sandbox -** `Ubuntu 22.04`\
Requirements:
+ Windows 10
+ Chrome 77.0.3865.120 or superior
+ 16GB Memory\

Steps:\
1. Clone respository using `https://github.com/JonathanCharalambous/holbertonschool-simple_shell.git`
2. Change directories to simple_shell `cd holbertonschool-simple_shell`
3. Compile the files and create an executabe `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
4. Run the simple shell using the following options - \
   Interactive `./hsh`\
   Non-interactive `echo "_insert command here_" | ./hsh`

## Authors
[Johnathan](https://github.com/JonathanCharalambous)\
[Mat](https://github.com/Mat-26-dot)\
[Marianne](https://github.com/T0ILETR0LL)

## Resources
[Everything you need to know to start coding your own shell](https://intranet.hbtn.io/concepts/900)\
[Basic writing and formatting syntax](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)

