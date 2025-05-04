#include "main.h"

/**
 * _getenv - Retrieves the value of an environment variable.
 * @name: The name of the environment variable.
 *
 * Return: Pointer to the value, or NULL if not found.
 */

char *_getenv(const char *name)
{
	int i = 0;
	size_t len = strlen(name);

	for (i = 0; environ[i]; i++)
	{
		if (strncmp(environ[i], name, len) == 0 && environ[i][len] == '=')
			return (environ[i] + len + 1);
	}

	return (NULL);
}
