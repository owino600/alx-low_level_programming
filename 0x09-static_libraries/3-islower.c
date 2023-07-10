#include "main.h"
/**
 * _islower - shows 1 if the input is a
 * lowercase character
 * @c: the character is ASCII code
 * return: 1 for lower case deposit 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
