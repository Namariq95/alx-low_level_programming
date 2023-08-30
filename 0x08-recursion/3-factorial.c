#include "main.h"

/**
 * factorial - return the factorial of a given number.
 * @n: number to return the factoriale
 *
 * Return: integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
