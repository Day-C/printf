#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
    int num = 998;

	len = _printf("Length:[%d, %i]\n", num, num);
	len2 = printf("Length:[%d, %i]\n", num, num);
	_printf("len: %d,  len2: %d\n", len, len2);

	return (0);
}
