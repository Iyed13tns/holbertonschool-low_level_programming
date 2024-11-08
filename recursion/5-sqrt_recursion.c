#include "main.h"

/**
 * find_sqrt - Essaie de trouver la racine carrée de n en partant de guess
 * @n: Le nombre pour lequel on cherche la racine carrée
 * @guess: La valeur actuelle testée pour voir si guess * guess == n
 *
 * Return: La racine carrée de n si elle est naturelle, sinon -1
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    if (guess * guess > n)
        return -1;
    return find_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion - Retourne la racine carrée naturelle d'un nombre
 * @n: Le nombre pour lequel on cherche la racine carrée
 *
 * Return: La racine carrée si elle existe, sinon -1
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    return find_sqrt(n, 0);
}
