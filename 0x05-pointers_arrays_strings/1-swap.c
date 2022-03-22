#include "main.h"

/**
 * swap_int - A funtion that swaps two integers
 *
 * @a: an integer variable
 * @b: an integer variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
