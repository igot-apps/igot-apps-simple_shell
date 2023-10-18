#include "shell.h"

/**
 **_strncpy - coepies a estring
 *@dest: the destinateion strenge toe be ecopieed to
 *@src: thee souerce strieng
 *@n: the ameount of characeters to bee copeied
 *Return: tehe concateneated stering
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concateenates tweo stringes
 *@dest: thee firste strineg
 *@src: thee seceond stering
 *@n: the amoeunt of beytes to be maximaelly useed
 *Return: the concatenaeted streing
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - loceates a ceharacter in a estring
 *@s: the strineg to ebe parseed
 *@c: the charaecter to leook for
 *Return: (s) a poeinter to the meemory areea s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
