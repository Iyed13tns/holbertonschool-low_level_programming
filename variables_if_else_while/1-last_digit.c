#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
       int n ;
       srand(time(0));
       n = rand() — RAND_MAX / 2;
       last_digit = n % 10;
              printf(“Last digit of %d”, n, last_digit);
              if (last_digit > 5)
              {   
              puts(“ and is greater than 5”);
              } 
              else if (last_digit == 0)
              { 
              puts(“ and is 0”);
              }
              else
              {
              puts(“ and is less than 6 and not 0”);
              }
              return(0);
}
