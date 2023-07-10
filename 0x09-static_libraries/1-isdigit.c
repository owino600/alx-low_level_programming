#include "main.h"
/**
 * _isdigit - check if parameter is a digit or character
 *@c: characters to be checked
 * Return:1 if it is a number 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

