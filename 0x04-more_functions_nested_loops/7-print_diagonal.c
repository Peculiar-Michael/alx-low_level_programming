#include "main.h"
/**
*print_diagonal - print forward slash  n times
*@n: number of characters to draw a diagonal
*/

void print_diagonal(int n)
{
	int slash;
	int space;

	if (n > 0)
	{
		for (slash = 1; slash <= n; slash++)
		{
			for (space = 1; space < slash; space++)
			_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
