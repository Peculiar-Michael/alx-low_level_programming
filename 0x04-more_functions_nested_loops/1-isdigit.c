#include "main.h"
/**
*_isdigit - prints out the digit
*@c: the digit to be used
*Return: 0
*/

int _isdigit(int c)
{
	int c;

	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
