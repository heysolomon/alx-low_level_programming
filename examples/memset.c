#include <stdio.h>
#include <string.h>

int main()
{
	char str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);

	memset(str + 13, 'x', 8);

	printf("After memset(): %s\n", str);

	return (0);
}
