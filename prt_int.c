#include "main.h"
/**
 * convert_int - function converts negative integers to positve
 * @n: parameter to function
 * Return: positive int
 */
int convert(int n)
{
	n = (-1) * n;
	_putchar('-');
	return (n);
}

/*
 * print_digit - function prints all digits of a number
 * @num: number to be printed
 * Return: void
 */
int print_digit(int num)
{
	int count = 0;

	if (num == 0)
		return (0);
	print_digit(num / 10);
	count++;
	_putchar(num % 10 + '0');
	return (count);
}

/**
 * print_int - function prints any number positive or negative
 * @n: parameter to function
 * Return: void
 */
int print_int(int n)
{
	int numb, count;

	if (n < 0)
	{
		numb = convert(n);
		count = print_digit(numb);
	}
	else if (n > 0)
	{
		count = print_digit(n);
	}
	return (count);
}
