#include <stdio.h>

extern void hello_f(void);
int sp;

int main(void)
{
	sp = 24;
	hello_f();
	printf("%d\n",sp);
	return 0;
}

int sp;

void hello_f(void)
{
	sp = 35;
	printf("Hello\n");
}