#include <stdio.h>

int main(void)
{
	char *age;
	printf("Input your age:");
	scanf("%c",&age);

	printf("age = %s", *age);

	return 0;
}