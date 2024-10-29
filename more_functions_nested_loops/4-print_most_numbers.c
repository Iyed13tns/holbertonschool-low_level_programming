#include "main.h"

/**
 * print_most_numbers - print from 0 to 9
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{ 
		if (c != 2 && c != 4)
			_putchar(c+'0');
	} 
	_putchar('\n');
}
