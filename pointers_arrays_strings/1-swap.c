#include <stdio.h>

/**
 * reset_to_98 - Takes a pointer to an int and updates
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * This function takes two pointers to integers and swaps their values.
 */

void swap_int(int *a, int *b)

{
int temp = *a;
*a = *b;
*b = temp;
}
