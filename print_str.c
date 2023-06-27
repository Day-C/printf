#include "main.h"
/**
 * prt_str - function prints string parameter
 * @str: parameter
 * Return: void
 */
void prt_str(char *str)
{
	int i = 0;
	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
	}
	while (str[i] !=  '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
