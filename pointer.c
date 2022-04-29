#include <stdio.h>
int main(void)
{
	int a = 10;
	int *p;
	p = &a;
	printf("value of a = %d\n", a);
	printf("value of a = %d\n", *p);
	printf("address of a: %p\n", &a);
	printf("address of a: %p\n", p);

	return (0);
}
