#include "main.h"
/**
 * binary_to_uint - it converts a binary number to unsigned int
 * @b: the binary number to be converted
 * Return: 0 incase of failure or the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, pos;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i--;
	for (pos = 1, uint = 0; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			pos *= 2;
			continue;
		}
		else if (b[i] == '1')
		{
			uint += pos;
			pos *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
