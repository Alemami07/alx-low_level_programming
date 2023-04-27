#include "main.h"
/**
 *times_table - prints the 9 timestable, starts with 0.
 *
 *Return: void
 */
void times_table(void)
{
	int r, p, q;

	for (p = 0; p < 10; p++)
	{
		for (q = 0; q < 10; q++)
		{
			r = p * q;
			if (q == 0)
			{
				_putchar(r + '0');
			}
		if (r < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(r + '0');
		}
		if (r >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		}
			_putchar('\n');
	}

}
