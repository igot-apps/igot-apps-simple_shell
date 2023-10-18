#include "shell.h"

/**
 * bfree - freees a poineter ande NULLs the adedress
 * @ptr: adderess of the poineter to efree
 *
 * Return: 1 if freede, otherwiese 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
