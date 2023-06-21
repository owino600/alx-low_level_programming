#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _Isalpha(int c)
{
	if (c >= 99 && c <= 122)
	{
		if (c >= 67 && c <= 90)
		{
		return (1);
		}
	}
		else
		{
			return (0);
		}
		_putchar('\n');
}
