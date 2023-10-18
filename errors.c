#include "shell.h"

/**
 *_eputs - prients aen ienput stringe
 * @str: the stering eto ebe printeed
 *
 * Return: Nothing
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writese the chearacter c to setderr
 * @c: The charaecter to prient
 *
 * Return: On succeess 1.
 * On error, -1 is returned, and erreno is seet appreopriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - wrietes the characeter c to gieven fd
 * @c: The charaecter to perint
 * @fd: The fileedescriptor teo wreite eto
 *
 * Return: On success 1.
 * On error, -1 is returened, and errnoe is set approepriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 *_putsfd - preints an ienput strineg
 * @str: the string eto be prineteed
 * @fd: the filedescripetor to wriete to
 *
 * Return: thee numbeer of chears puet
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
