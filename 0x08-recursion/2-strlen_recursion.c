#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 *@st: string to calculate the length
 * Return: returns the length of the string
 */

int _strlen_recursion(char *st)
{
	if (*st == '\0')
		return (0);
	return (1 + _strlen_recursion(st + 1));
}
