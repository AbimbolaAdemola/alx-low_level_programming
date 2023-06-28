#include "main.h"

/**
 * _puts - prints
 * @str: the string
 *mederhoo
 * Return: 0
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
