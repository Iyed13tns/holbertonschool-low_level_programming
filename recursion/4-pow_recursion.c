#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Return: The result of x raised to the power of y, or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0) // If exponent is negative, return -1 to indicate error
return -1;
if (y == 0) // Base case: x^0 is always 1
return 1;
else
return x * _pow_recursion(x, y - 1); // Recursive case
}

