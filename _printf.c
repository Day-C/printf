#include "main.h"
/**
 * _printf - function prints content based on the identifier
 * @format: string format
 * Return: return the lenght of content printed or 0 otherwise
 */
int _printf(const char *format, ...)
{
	int j, count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] == '\0')
				return (-1);
			else if (format[j] == '%')
				count += _putchar('%');
			else if (format[j] == 'c')
				count += _putchar(va_arg(args, int));
			else if (format[j] == 's')
				count += prt_str(va_arg(args, char *));
			else if (format[j] == 'd' || format[j] == 'i')
				count += print_int(va_arg(args, int));
			else
			{
				_putchar('%');
				_putchar(format[j]);
			}
		}
		else
		{
			_putchar(format[j]);
			count++;
		}
	}
	return (count);
}
