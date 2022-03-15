#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function that prints letters
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
