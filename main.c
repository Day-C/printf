#include "main.h"
/**
 * main - m_function
 *
 * Return: (0) if successful
 */
int main(void)
{

	int len;
	int len2;
	/*unsigned int ui;*/
	/*void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	/*ui = (unsigned int)INT_MAX + 1024;*/
	/*addr = (void *)0x7ffe637541f0;*/

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len);

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	_printf("hello Dan");
	_printf("this is the %s function", "_printf");
	_printf("%c is see", 'c');
	_printf("l00%% bigger");
	_printf("%d is even", 22);
	_printf("%d", 7);
	_printf("%i", 7);
	_printf(" ");
	return (0);
}
