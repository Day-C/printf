#include "main.h"
/**
 * prt_str - function prints string
 * @str: parameter to function
 * Return: lenght of string
 */
int prt_str(char *str)
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
	return (i);
}
