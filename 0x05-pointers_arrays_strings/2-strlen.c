#include "main.h"
#include <string.h>

/**
*_strlen - the length of the string
*@s: the pointer holding the string
*
*Return: string length
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;

	return (len);
}
