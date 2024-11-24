#include <stdio.h>
#include "function_pointers.h"

/**
 * @size: is the number of elements in the array
 * @array: A pointer to the array of integers
 * @cmp: A pointer to a function that takes an integer as input and returns an integer
 * Return: 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);


for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
