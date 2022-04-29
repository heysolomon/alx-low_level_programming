#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("Address of 'n': %p\n", &n);
	printf("Address of 'p': %p\n", p);
	printf("VAlue of p: %lu\n", p);
	printf("VAlue of n: %lu\n", n);
	return (0);
}
