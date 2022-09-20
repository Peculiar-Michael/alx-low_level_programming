#include "main.h"
#include <string.h>

/**
*_strlen - the length of the string
*@s: the pointer holding the string
*
*Return: 0
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	len++;

	return (len);
}
