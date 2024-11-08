#include "main.h"

/**
 * main - Prints the name of the program followed by a newline.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments).
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    (void)argc;  /* Explicitly mark 'argc' as unused */
    printf("%s\n", argv[0]);
    return (0);
}
