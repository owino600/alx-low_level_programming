#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*if statment*/
	{
		_print_rev_recursion(s + 1); /*add s*/
		_putchar(*s); /*print s*/
	}
}
