#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int *p;
	int q;

	printf("Size of pointer: %lu\n", sizeof(p));
	printf("Size of interger: %lu\n", sizeof(q));
	return (0);
}
