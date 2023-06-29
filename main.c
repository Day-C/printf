#include "main.h"
#include "stdio.h"
/**
 * miain - test function
 *
 * Retur: 0;
 */
int main(void)
{
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let's print a simple sentence.\n");
	_printf("%!", 'S');
	_printf("\n%d, is not the same as %d", 56286, -56286);
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%s", "This sentence is retrieved from va_args!\n");
	return (0);
}
