NAME
      parse_line - split a line into words (arguments)

SYNOPSIS
      void parse_line(char *line, char **arg);

DESCRIPTION
      This function takes a line of text (like a command line) and splits it into separate words
      using strtok() with DELIM as the separator. Each word is saved in the arg array.
      It keeps splitting until there are no more words or until it reaches the maximum number of arguments.
      The last element of arg is set to NULL to mark the end.

RETURN VALUE
        This function does not return anything (void).
	The arguments are stored in the arg array.

