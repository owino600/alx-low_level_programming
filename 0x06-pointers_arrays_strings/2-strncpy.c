#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: input value
 * @src: input valuation
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j]  != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < 0)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
