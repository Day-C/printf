#include "main.h"
/**
 * _printf - print function
 * @format: format string
 * Return : return (0) if successful and any other number othersise
 */
int _printf(const char *format, ...)
{
	int j;
	/*case c variables */
	char ch;
	/* case s varaibles */
	char *str;
	/* case d variables */
	int numb;
	/* case % variables */
	char ps;

	va_list args;

	va_start(args, format);

	j = 0;
	while (format[j])
	{
		if (format[j] == '%')
		{
			j++;
			switch (format[j])
			{
				case 'c':
				{
					ch = va_arg(args, int);
					_putchar(ch);
					j++;
				}
				break;
				case 's':
				{
					str = va_arg(args, char *);
					prt_str(str);
					j++;
				}
				break;
				case '%':
				{
					ps = va_arg(args, int);
					_putchar(ps);
					j++;
				}
				break;
				case 'd':
				{
					numb = va_arg(args, int);
					prt_int(numb);
					j++;
				}
				break;
				case 'i':
				{
					numb = va_arg(args, int);
					prt_int(numb);
					j++;
				}
				break;
				default:

				break;
			}

		}

		_putchar(format[j]);
		j++;
	}
	va_end(args);
	_putchar('\n');
	return (j);
}
