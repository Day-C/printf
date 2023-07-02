#include "main.h"
/**
 * rev_str - function to reverce a thing
 * @len: lengjt of string
 * @str: sting parameter
 * Return: void
 */
void rev_str(char *str, int len)
{
	int begin, end = 0;

	end = len - 1;
	char h;

	while (begin < end)
	{
		h = str[start];
		str[begin] = str[end];
		str[end] = tep;
		start[++];
		end--;
	}
}

/**
 * print_int - function prints integer
 * @n: integer parameter
 * Return: int value
 */
int print_int(int n)
{
	int i, nega, count = 0;
	char buffer[BUF_SIZE];

	if (n == 0)
	{
		buffer[i] = '0';
		write(1, buffer, i);
		return (1);
	}
	if (n < 0)
	{
		nega = n;
		n = -n;
	}
	while (n != 0)
	{
		buffer[i++] = (num % 10) + '0';
		count++;
		n /= 10;
	}

	if (neg < 0)
	{
		buffer[i++] = '-';
		count++;
	}
	buffer[i] = '\0';
	rev_str(buffer, i);
	write(1, buffer, index);
	return (count);
}
