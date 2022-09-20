#include "main.h"
/**
 * puts_half - puts half of a string
 * @str: input string
 * Return: nothing
 */
void puts_half(char *str)
{
	int l = _strlen(str);

	if (l % 2 == 0)
	{
		l = l / 2;
	}
	else
	{
		l = (l + 1) / 2;
	}
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: returns lenght;
 */
int _strlen(char *s)
{
	int count, i;

	i = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		i++;
	}
	return (i);
}
