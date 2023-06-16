#include <stdio.h>
/*
 * main - entry point
 * description: 'print number of base 10'
 * return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
