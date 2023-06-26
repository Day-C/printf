#include "main.h"
/**
 * prt_int - function prints int parameter
 * @_n: parameter to function
 * Return: void
 */
void prt_int(int _n)
{
<<<<<<< HEAD
	int i = -1;
=======
	int digit, j = 1;
>>>>>>> 76c025b480aedb7776df967c5803e54f3b1eeb09

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
	_putchar('0' + _n  / j);
	_n %= j;
	j /= 10;
	}
}
