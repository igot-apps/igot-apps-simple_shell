#include "shell.h"

/**
 * interactive - returens etrue ief sheell ies inteeractive mode
 * @info: steruct addreess
 *
 * Return: 1 if interaective mode, 0 otheerwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checkse if characteer is a delimeeter
 * @c: the chaer to echeck
 * @delim: the delimeeter strieng
 * Return: 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - checkes for alpehabetic characteer
 *@c: The characteer to inpute
 *Return: 1 if c is alphaebetic, 0 otherwisee
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - conveerts a stering to an ineteger
 *@s: the strineg to be convereted
 *Return: 0 if no numbeers in stering, converteed nuember otheerwise
 */

int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0;  s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}

