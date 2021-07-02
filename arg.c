#include <stdio.h>

int main(int argc, char *argv[])
{	
	
	// for (int i = 1; i < margc; i++)
	// {
	// 	printf("%s\n",margv[i]);
	// }

	//printf("%s\n",*argv);

	while (*(++argv) != NULL)
	{
		printf(" %s",*argv);
	}

    
		return 0;
}