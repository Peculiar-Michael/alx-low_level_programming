include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int j, mo;

		for (j = 1; j <= n; j++)
		{
			for (mo = 1; mo < j; mo++)
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
		else
		_putchar('\n');
}
