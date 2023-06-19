#include <stdio.h>
/**
 * main - print all single digit number of base 10
 * starting with 0
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
