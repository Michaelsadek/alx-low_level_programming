#include "main.h"

/**
 * jack bouer - print every minute of the day of jack Bouer
 * Return: ...
 */
void jack_bouer(void)
{

	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
				for (c = 0; c <= 5; c++)
				{
					for (d = 0; d <= 0; d++)
					{
						_putchar(a + 'a');
						_putchar(b + '0');
						_putchar(50);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
		}
	}
}
