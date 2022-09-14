#include "main.h"
/**
*print_sign - a function that prints the sign of a number
*@n: returns 1 if > 0, 0 if = 0, -1 if < 0
*Return: Always 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
