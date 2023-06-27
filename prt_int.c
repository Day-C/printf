#include "main.h"
/**
 * prt_int - function prints interger 
 * @_n: parameter to function
 * Return: void
 */
void prt_int(int _n)
{
	int digit, j = 1;

	if (_n < 0)
	{
		_putchar('-');
		_n = -_n;
	}
	digit = _n;
	while (digit > 9)
	{
		digit /= 10;
		j *= 10;
	}
	while (j > 0)
	{
		_putchar('0' + _n / j);
		_n %= j;
		j /= 10;
	}
}
