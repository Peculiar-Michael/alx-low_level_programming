#include "main.h"
#include <unistd.h>

/**
*_puts - a function that prints a string until the first newline character
*@str: the pointer
*Return: nothing
*/

void _puts(char *str)
{
	int i = 0; 

	while (*str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
