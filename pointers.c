#include <stdio.h>

int main()
{
	int num = 3;
	printf("num = %i\n", num);
	int *ptr;
	*ptr = num;
	printf("ptr = %i\n", ptr);
	printf("&ptr = %i\n", &ptr);
	printf("*ptr = %i\n", *ptr);
}
