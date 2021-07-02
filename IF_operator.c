#include <stdio.h>

int main(void)
{
	if (23 < 26) 
		printf("%s\n", "Истина");
	else
		printf("%s\n","Ложь");

	int x = 31;
	switch(x+1)
	{
	case 21:
		{
			printf("%s\n","====");
			printf("%d\n",x+1);
			printf("%s\n", "=====");
			break;
		}
		case 22:
		{
		  printf("%s\n","------");
			printf("%d\n",x+1);
			printf("%s\n", "------");
			break;	
		}
		default:
		{
			printf("%s\n","@@@@@@@@");
			printf("%d\n",x+1);
			printf("%s\n", "@@@@@@@@");
			break;
		} 
	} 

	return 0;
}