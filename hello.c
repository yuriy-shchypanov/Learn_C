#include <stdio.h>
#include <locale.h>
#include <limits.h>

const int state_ok = 12;

int main(void)
{
	char *locale = setlocale(LC_ALL, "");
	
	int x = 25;
	//float z = x / y;
		   while (x < 27) {
			printf("qwerty\n");
			x++;
		}
		
	return 0;
}