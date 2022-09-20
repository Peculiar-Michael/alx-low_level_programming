#include "main.h"

/**
*print_rev - prints strubg in reverse order
*@s: address of the pointer of the string
*Return: 0
*/

void print_rev(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
	_putchar('\n');
}

