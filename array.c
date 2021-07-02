#include <stdio.h>

int main(void)
{
	int mass[4] = {1,2,3,4};
	
	char mass_ch[] = {'a','b','c'};

	for (int i = 0;i < 3; i++)
	{
		printf("%c", mass_ch[i]);
	}
	printf("\n");
	return 0;
	}
