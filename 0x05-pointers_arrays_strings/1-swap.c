#include "main.h"

/**
*swap_int - a function to swap two integers pointers
*@a: the first pointer
*@b: the second pointer
*Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
