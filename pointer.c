#include <stdio.h>



int main(void) 
{
	int mass[10] = {19,8,7,6,5,4,3,2,10,926};
	int *p;
	int *pp;
	p = mass;
	pp = &mass[0];
	if (p != pp)
		printf("%s\n", "Not Equal");
	else
	{
		printf("p=  %p\n",p);
		printf("pp= %p\n",pp);
	}

	int c_dira = 45;
	const int *const p_c_dira = &c_dira;
	

	printf("%d\n",*p_c_dira);

		
	return 0;
}