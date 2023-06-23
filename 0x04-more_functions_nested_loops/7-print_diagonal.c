#include "main.h"
/**
 * print_diagonol - draw a diagonol line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
