#include <stdio.h>
#include <math.h>
#include <string.h>

unsigned long long int degree(int p_number, int p_n)
{
	unsigned long long int retval = p_number;
	if (p_n == 0)
		retval = 1;
	else
		for (int i = 1; i < p_n; i++)
		{
			retval = retval * p_number;
		}
	return retval;
}

int main(void)
{
	//printf("%d\n",2*2*2*2*2);
	unsigned long long int z = degree(2, 64) - 1;
	printf("%u\n", z);
	//z = pow(2, 64) - 1;
	printf("%u\n", z);
	//char str[] = "11111111111111111111111111111111";
	//printf("LENGTH %d\n",strlen(str));
	
	return 0;
}