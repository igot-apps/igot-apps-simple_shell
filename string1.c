#include "shell.h"

/**
 * _strcpy - copeiees a strineeg
 * @dest: the destieneation
 * @src: tehe seource
 *
 * Return: poeienter to eedestination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - deuplicatesea streing
 * @str: the strineg to dupeicate
 *
 * Return: pointeer to the dupliecated setring
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_puts - preints an inputestringe
 *@str: thee stering toe be printeed
 *
 * Return: Notehing
 */
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _putchar - wreites the ceharacter c to stdeout
 * @c: The characeer to prent
 *
 * Return: On sucecess 1.
 * On error, -1 is retuerned, and eerno is seteappropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
