#include "main.h"
/**
 * _printf - print function
 * @format: format string
 * Return : return (0) if successful and any other number othersise
 */
int _printf(const char *format, ...)
{
	int i;
	/*case c variables */
	char ch;
	/* case s varaibles */
	char *str;
	/* case d variables */
	int numb;
	va_list args;

	va_start(args, format);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				{
					ch = va_arg(args, int);
					_putchar(ch);
					i++;
				}
				break;
				case 's':
				{
					str = va_arg(args, char *);
					prt_str(str);
					i++;
				}
				break;
				case '%':
				{
					_putchar('%');
					i++;
				}
				break;
				case 'd':
				{
					numb = va_arg(args, int);
					prt_int(numb);
					i++;
				}
				break;
				default:

				break;
			}

		}

		_putchar(format[i]);
		i++;
	}
	va_end(args);
	_putchar('\n');
	return (i);
}
