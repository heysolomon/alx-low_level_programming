#include <stdio.h>
#include "main.h"
/**
 * _abs - This is a function that prints the absolute value of an integer
 * @r: an integer that accepts numbers
 * Return: Always 0 (Success)
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
