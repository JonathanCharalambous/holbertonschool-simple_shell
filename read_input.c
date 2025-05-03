 NAME
      read_input - get a line of input from the user
 
  SYNOPSIS
      int read_input(char **line, size_t *len, int interactive);
 
  DESCRIPTION
      This function reads a line of input from the user.
      If interactive is true, it shows the prompt first.
      It uses _getline() to get the input and saves it in *line.
      If there is an error or the user presses Ctrl+D, it returns -1.
      If the line ends with a newline character, it replaces it with '\0' to remove it.
 
 RETURN VALUE
       Returns 0 if it reads the input successfully.
       Returns -1 if there is an error or end of file.
 
