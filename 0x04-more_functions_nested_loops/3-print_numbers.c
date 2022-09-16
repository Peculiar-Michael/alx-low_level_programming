#include "main.h"

/**
*print_numbers - print  numvers from zero through 9, followed by a new line
*Rturn: 0
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
