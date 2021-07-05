#include <stdio.h>
#include <stdlib.h>

void pointerCreate(void)
{
	int *p;
	int n = 27;
	p = malloc(sizeof(int));
	*p = n;
	printf("%d\n",*p);
	(*p)++;
	printf("%d\n",*p);
	free(p);
	printf("=========\n");
	if (p != NULL)
		printf("%d\n",*p);
	else printf("Null pointer");
}

int main(void)
{
	void (*pnt) (void);  
	pnt = pointerCreate;
	pnt();
	return 0;
}