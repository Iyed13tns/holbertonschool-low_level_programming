#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Argument count.
 * @argv: Argument vector (array of arguments).
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);  /* Print each argument on a new line */
}
return (0);
}
