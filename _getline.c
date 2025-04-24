SYNOPSIS

ssize_t _getline(char lineptr, size_t *n);

DESCRIPTION

_getline() reads a whole line from standard input (stdin) and puts it into a buffer that you give it with lineptr. 
If you pass in NULL for lineptr or set *n to 0, the function will create a buffer for you, starting at 1024 bytes. 
It keeps reading one character at a time until it hits a newline ('\n') or the end of the file (EOF). 
If the buffer isn't big enough, it gets resized automatically with realloc. The line it reads will always be null-terminated, 
so you can use it as a regular C string.

RETURN VALUE

The function returns the number of characters it read, including the newline if there was one, 
but not counting the null terminator at the end. If something goes wrong 
(like an error or EOF before reading anything), it returns -1.
