#include <stdio.h>

int main(void)

{
	int i = 0;
	int y = 0;

	int z = ++i;
	printf("%d %d\n",z,i);
	int z1 = y++;
	printf("%d %d\n",z1,y);

    i = 0; y = 0;
	while ((++i)<4)
	{
		printf("Проход=%d\n",y);
		printf("%d\n",i);
		y++;
	}
	return 0;
}