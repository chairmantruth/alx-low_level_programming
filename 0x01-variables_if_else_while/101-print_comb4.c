#include <stdio.h>
/**
 *main - entry point
 *Description:	"Prints all possible combinations of three different digits"
 *Return: Always 0 (Success).
 */
int main(void)
{
	int integer_1, integer_2, integer_3;

	for (integer_1 = 0; integer_1 < 8; integer_1++)
	{
		for (integer_2 = integer_1 + 1; integer_2 < 9; integer_2++)
		{
		for (integer_3 = integer_2 + 1; integer_3 < 10; integer_3++)
		}
		putchar(integer_1 + '0');
		putchar(integer_2 + '0');
		putchar(integer_3 + '0');
		if (integer_1 == 7 && integer_2 == 8 && integer_3 == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
