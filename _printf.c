#include "main.h"
/**
 * _printf -variadic function taking parameters and prints them
 * @format: format string
 * Return : return (0) if successful and any other number othersise
 */
int _printf(const char *format, ...)
{
	int j, i = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] == '%')
			{
				i += _putchar('%');
				j++;
			}
			else if (format[j] == 'c')
			{
				i += _putchar(va_arg(args, int));
				j++;
			}
			else if (format[j] == 's')
			{
				i += prt_str(va_arg(args, char *));
				j++;
			}
		}
		_putchar(format[j]);
		i++;
	}
	_putchar('\n');
	return (i);
}
