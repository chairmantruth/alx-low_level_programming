#include "main.h"
/**
 * times_table -prints tables
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					putchar ('0');
				}
				if (b != 0)
				{
					putchar (' ');
					putchar ((c % 10) + '0');
				}
				if (b < 9)
				{
					putchar(',');
					putchar (' ');
				}
			}
			else
			{
				putchar ((c / 10) + '0');
				putchar ((c % 10) + '0');
				if (b < 9)
				{
					putchar(',');
					putchar (' ');
				}
			}
		}
			putchar ('\n');
	}
}
