#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int x;
srand(time(0));
x = rand()  - RAND_MAX / 2;

printf("%d \n", x);

return 0;
}
