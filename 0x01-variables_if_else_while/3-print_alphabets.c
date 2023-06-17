#include <stdio.h>
/**
 * main - print the alphabet
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'z')
	{
		putchar('c');
		d++;
	}
	putchar ('\n');
	return (0);
}
