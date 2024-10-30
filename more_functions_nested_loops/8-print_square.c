#include "main.h"

/**
 * print_square - function that prints a square
 * @size: The number of times to print diagonal lines
 * Return: empty
 */

void print_square(int size)

{  

       int c, x;
 
       if (size <= 0)
       {
              _putchar('\n');
       }
       else
       {
            for (c = 0; c < size; c++)
            {
                for (x = 0; x < size; x++)
                {
                    _putchar(35);
                }
                _putchar('\n');
            }
      }
}
