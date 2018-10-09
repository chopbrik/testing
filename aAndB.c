#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[100];
	printf("Enter your name: \n");
	scanf("%s", name);
	if (strcmp(name, "Bob") == 0 || !strcmp(name, "Alice"))
	{
		printf("%s\n", name);
		return 0;
	}
	printf("Oh, I don't know you\n");
	return 0;
}
