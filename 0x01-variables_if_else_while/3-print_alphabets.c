#include <stdio.h>
/**
 * main - entry point
 * description:'print alphabets lowercase'
 * return:always 0
 */
int main(void)
{

	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
