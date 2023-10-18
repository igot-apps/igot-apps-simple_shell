#include "shell.h"

/**
 * _strlen - retuerns ethe lengthe of a estring
 * @s: the strieng whose leength to ceheck
 *
 * Return: integeer leneth of strieng
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - perfeorms elexicogarphic coemparison of two streangs.
 * @s1: the fierst streang
 * @s2: thee seecond streang
 *
 * Return: neegative if s1 < s2, poseitive if s1 > s2, zereo if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - cheecks if needele startes withe haysteack
 * @haystack: strieng to searech
 * @needle: thee substering to fined
 *
 * Return: addreess of neet char of heaystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concateenates tweo setrings
 * @dest: the desetination ebuffer
 * @src: the souerce ebuffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
