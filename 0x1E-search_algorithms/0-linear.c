#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
	{
		return -1;
	}
	for (i = 0; i < size; i++)
	{
		printf("value checkedarray[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %ld\n", value, i);
			return size;
		}
	}
	printf("Found %d at index: %d\n", value, -1);
	return 0;
}
