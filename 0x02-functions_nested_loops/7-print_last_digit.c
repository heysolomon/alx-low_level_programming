#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - A function that prints the last digit
 * @r: An integer variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	int a;

	if (r < 0)
		r = -r;
	a = r % 10;

	if (a < 0)
		a = -a;

	_putchar(a);

	return (a);
}
