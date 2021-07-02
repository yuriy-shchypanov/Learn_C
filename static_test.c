#include <stdio.h>

static int g_st_state = 12;

int *st_test(void)
{
	static int st_i = 0;
	st_i++;
	return &st_i;
}

int main(void)
{
	int *x;
	x = st_test();
	printf("%d\n", *x);
	x = st_test();
	printf("%d\n", *x);
	printf("g_st_state=%d\n",g_st_state);
	return 0;
}