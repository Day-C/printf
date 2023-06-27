#include "main.h"
/**
 * n_to_p - function converts a negative inpit to positive
 * @num: parameter to the function
 * Return: positive int
 */
int n_to_p(int num)
{
	num = (-1) * num;
	_putchar('-');
	return (num);
}
/**
 * prt_num - function prints every digit in a number
 * @n: int parameter to function
 * Return: void (nothing)
 */
void prt_num(int n)
{
	if (n <= 0)
		return;
	prt_num(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * print_int - function prints positive and negative  nums
 * @number: parameter to function
 * Return: void (nothing)
 */
void print_int(int number)
{
	int j;

	if (number < 0)
	{
		j = n_to_p(number);
		prt_num(j);
	}
	else if (number >= 0)
		prt_num(number);
}
