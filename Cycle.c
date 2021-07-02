#include <stdio.h>

int main(void)
{
	printf("%s\n", "Циклы");

	printf("%s\n", "For");
	for (int i = 0; i < 3; i++)
    {
        printf("%d * %d = %d \n", i, i,  i * i);
    }
    
    printf("%s\n", "Do");

    	int i = 6;
    do
    {
        printf("%d", i);
        i--;
        if (i==3) break;
    }
    while (i > 0);

    printf("\n");

	printf("%s\n", "While");

		i = 8;
    while (i > 0)
    {
        printf("%d \n", i);
        i--;
        if (i % 2 == 0) {i--;continue;}

    }    

	return 0;
}