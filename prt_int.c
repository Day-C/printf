#include "main.h"
/**
 * prt_int - function prints int parameter
 * @_n: parameter to function
 * Return: void
 */
void prt_int(int _n)
{
	int i = -1;
	if (_n < 0)
	{
		i *= _n;
		_putchar('-');
		_putchar(i % 10 + '0');
	}
	_putchar(_n % 10 + '0');
}
