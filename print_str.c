#include "main.h"
/**
 * prt_str - function prints string parameter
 * @str: parameter
 * Return: void
 */
void prt_str(char *str)
{
	int i = 0;
	int j;
	char *ptr = "(NULL)";

	if (str == NULL)
	{
		for (j = 0; ptr[j] != '\0'; j++)
		{
			_putchar(ptr[j]);
		}
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
