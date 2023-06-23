#include "main.h"
/**
 * prrint_squre - print a squre followed by a new line
 * @size: size of squre
 */
void print_squre(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
