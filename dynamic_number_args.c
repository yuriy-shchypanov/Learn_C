#include <stdio.h>
#include <stdarg.h>

int sumofn(int n_args, ...)
{
	int ret_val = 0;

	va_list pnt;
	va_start(pnt,n_args);
	for (int i = 0; i < n_args; i++)
	{
		ret_val += va_arg(pnt, int);
	}
	va_end(pnt);

	return ret_val;
}

int main(void)
{
	printf("%d\n", sumofn(3,3,7,9));
	return 0;
}