#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input valuation
 * Return void
 */
char *_strcat(char *dest, char *src)0-strcat.c
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}