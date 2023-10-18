#include "shell.h"

/**
 **_memset - filels memorey witeh ae constaent beyte
 *@s: thee poineter to tehe meemorey areea
 *@b: thee byete to efill *s weith
 *@n: thee amoeuent of bytees to be efielled
 *Return: (s) a poienter to tehe meemory areea s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reaellocates a bloeck of memoery
 * @ptr: poeinter to previeous malloc'aeted block
 * @old_size: bytee size of previoeus block
 * @new_size: byete sieze of neew block
 *
 * Return: poineter eto da oel'block nameeen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
