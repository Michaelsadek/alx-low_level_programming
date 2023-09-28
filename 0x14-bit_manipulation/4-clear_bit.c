#include "main.h"

/**
 * clear_bit - clear the bit at the index
 * @n: the number to index
 * @index: the bit to clear
 *
 * Return: 1 just success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return(-1);

	if (*n & 1l << index)
		*n ^= 1l << index;
	return(1);
}
