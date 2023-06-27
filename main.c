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
	
	len = printf("hello world");
	len2 = _printf("hello world");
	printf("printf len: %d, len2: %d", len, len2);
	_printf("_printf len: %d; len2: %d", len, len2);
	return (0);
}
