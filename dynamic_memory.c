#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int mass[5] = {1,2,3,4,5};

	int *block = calloc(5,sizeof(int));

	block[0] = 12; block[1] = 14; block[2] = 15;

	printf("%d\n",block[1]);

	free(block);

	return 0;
}