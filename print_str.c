#include "main.h"
/**
 * prt_str - function prints string parameter
 * @str: parameter
 * Return: void
 */
void prt_str(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
