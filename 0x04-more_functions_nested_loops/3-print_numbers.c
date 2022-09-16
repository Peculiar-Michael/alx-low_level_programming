#include "main.h"

/**
*print_numbers - print  numvers from zero through 9, followed by a new line
*/

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
