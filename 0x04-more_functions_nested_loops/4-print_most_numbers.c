#include "main.h"

/**
*print_most_numbers - prints numbers from 0 througj 9 excluding 2 and 4
*Return: nothing
*/

void print_most_numbers(void)
{
	int i;

	i = '0';
	while (i < 9)
	{
		if (i == '2' || i == '4')
		{
			i++
			continue;
		}
		_putchar(i);
		_putchar('\n');
	}
}
