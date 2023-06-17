#include <stdio.h>
/**
 * main - A program that print the size of computers using printf function
 *
 * Return: Always 0(success)
 */
int main(void)
{
	printf("size of a char %d byte(s)\n", sizeof(char));
	printf("size of an int %d byte(s)\n", sizeof(int));
	printf("size of long int %d bytes(s)\n", sizeof(long int));
	printf("size of long int %d byte(s)\n", sizeof(long long int));
	printf("size of float %d byte(s)\n", sizeof(float));
	return (0);
}
