#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments).
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    /* Print the number of arguments excluding the program name */
    printf("%d\n", argc - 1);
    return (0);
}
