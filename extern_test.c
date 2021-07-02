#include "syn.h"
#include <stdio.h>
#include "g_var_def.c"

int main(void)
{
	int x = inc_syn(4);
	printf("%d\n",x);
	printf("%d\n",global_variable);
	return 0;
}

int inc_syn(int p_x)
{
	return ++p_x;
}