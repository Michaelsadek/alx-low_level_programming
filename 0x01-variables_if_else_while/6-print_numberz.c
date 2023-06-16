#include <stdio.h>
/*
 * main - entry point
 * description: 'print number of base 10 using putchar'
 * return: always 0
 */
int main(void)
{
	int n;

	for(n = 0; n <= 10, n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
