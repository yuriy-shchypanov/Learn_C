#include <stdio.h>

int hello(char *p_str)
{
	printf("%s\n",p_str);
	return 0;
}


int main(void)
{
	int (*ptr) (char *) = hello;
	ptr("QWERTY");
	//hello ("Yuriy");
	return 0;
}