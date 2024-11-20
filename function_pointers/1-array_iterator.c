#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: ee
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;
if (array != NULL && action != NULL)
{
for (x = 0; x < size ; x++)
action(array[x]);


}


}
