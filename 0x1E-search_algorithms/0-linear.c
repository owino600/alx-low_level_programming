#include "search_algos.h"
int linear_search(int *array, size_t size, int value)
{
    int i;
    if (array == NULL)
    {
        return -1;
    }
    for (i = 0; i <= size; i++)
    {
        if (array[i] == value)
        {
            printf("value checked array: %d = %d", value, value)
            return size;
        }
    }
    return 
}