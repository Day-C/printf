#include "main.h"
/**
 * prt_str - func to print string
 * @str: ppointer to string
 * Return: index
 */
int prt_str(char *str)
{
	int i = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
