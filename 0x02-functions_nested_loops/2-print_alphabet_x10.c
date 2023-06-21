#include <main.h>
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * followed by newline
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (a <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		putchar('\n');
		i++;
	}
}
