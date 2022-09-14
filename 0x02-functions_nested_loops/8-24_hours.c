#include "main.h"
/**
*jack_bauer -  prints every minute of the day for jack
*hr = hours, min = minutes
*dividing by 10 allows tge next digit to rotate
*for loop breaks before exceeding 2400hrs
*Description: jack_bauer
*Return: 0
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
