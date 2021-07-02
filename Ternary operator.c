#include <stdio.h>

int main(void) 
{
	printf("%s\n", "Тернарный оператор");

	char *z = (25-21) ? "Истина" : "Ложь";
	printf("%s \n",z);
	return 0;
}