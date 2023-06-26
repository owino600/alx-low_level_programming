#include "main.h"
/**
 * _puts - print a string followed by a nwew line
 * @str: print string
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
