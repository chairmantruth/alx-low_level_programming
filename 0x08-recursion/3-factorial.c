#include "main.h"

/**
 * factorial - returns the factorial of numbers
 *
 * @n: "number whose factorial is to be"
 * Return: varies
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
return (n * factorial(n - 1));
}
