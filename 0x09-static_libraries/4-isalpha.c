#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: the character to be checked
 * Return: 1 if character is a letter, 0 otherwise
 */
int _Isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
