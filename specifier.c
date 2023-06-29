#include "main.h"
/**
 * format_specifier - function checks for format spsifier
 * @f: sting to check format specifier from
 * @args: variable arguments
 * Return: index
 */
int format_specifier(const char *f, va_list args)
{
	int i, j;

	for (j = 0; f[j] != '\0'; j++)
	{
		if (f == NULL)
			return (-1);
		if (f[j] == '%')
		{
			j++;
			if (f[j] == '%')
			{
				_putchar('%');
				j++;
			}
			else if (f[j] == 'c')
			{
				_putchar(va_arg(args, int));
				j++;
			}
			else if (f[j] == 's')
			{
				i += prt_str(va_arg(args, char *));
				j++;
			}
			else if (f[j] == 'd')
			{
				i += prt_int(va_arg(args, int));
				j++;
			}
		}
		_putchar(f[j]);
		i++;
	}
	return (i);
}

