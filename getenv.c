_getenv - get the value of an environment variable

Synopsis:

char _getenv(const char *name);

Description:

This function looks through all the environment variables and tries to find one that matches the name you give it. 
If it finds it, it gives you back a pointer to the value part (the stuff after the = sign). 
If it can't find it, it just returns NULL.

Return Value:

- Returns a pointer to the value if it finds the variable.
- Returns NULL if it doesn't exist.
