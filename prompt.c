 NAME
      prompt - show the shell prompt
 
  SYNOPSIS
      void prompt(void);
 
  DESCRIPTION
     This function prints a dollar sign and a space ("$ ") to the screen
     to show the user that the shell is ready for a command.
     It uses fflush(stdout) to make sure the prompt is shown right away.

 RETURN VALUE
      This function does not return anything (void).

