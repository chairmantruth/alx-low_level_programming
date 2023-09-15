#include <stdio.h>
/**
 * main - maincode
 *
 * Return: Always 0
 *
 * Description: "Print lowercase alphabets"
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
