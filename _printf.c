#include "main.h"
/**
 * _printf - print function
 * @format: format string
 * Return : return (0) if successful and any other number othersise
 */
int _printf(const char *format, ...)
{
	int j, i = 0;
	va_list args;

	va_start(args, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			_putchar(format[j]);
		}
		else if (format[j + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			j++;
		}
		else if (format[j + 1] == 's')
		{
			prt_str(va_arg(args, char *));
			i += 2;
			j++;
		}
		else if (format[j + 1] == '%')
		{
			_putchar('%');
			j++;
		}
		else if (format[j + 1] == 'd')
		{
			prt_int(va_arg(args, int));
			j++;
		}
		else if (format[j + 1] == 'i')
		{
			prt_int(va_arg(args, int));
			j++;
		}
		i++;;


	}
	va_end(args);
	_putchar('\n');
	return (i);
}
