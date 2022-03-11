#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %i byte(s)", sizeof(char));
	prinf("Size of an int: %i byte(s)\n", sizeof(int));
	prinf("Size of a long int: %i byte(s)\n", sizeof(long int));
	prinf("Size of a long int: %i byte(s)\n", sizeof(long long int));
	prinf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
