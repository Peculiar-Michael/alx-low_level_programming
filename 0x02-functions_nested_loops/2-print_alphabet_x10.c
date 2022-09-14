#include "main.h"
/**
*print_alphabet_x10 - print the alphabet in lowercase 10 times
*Return: 0
*/

void print_alphabet_x10(void)
{
	int alpha;
	int n;

	n = 0;

	while (n < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		n++;
		_putchar('\n');
	}
}
