#include <stdio.h>


/* printd: печатает n как целое десятичное число */ 
void printd(int n) 
{ 
    if (n < 0) { 
        putchar('-'); 
        n = -n; 
    } 
    if (n / 10) 
        printd(n / 10); 
    putchar(n % 10 + '0'); 
}

int main(void) 

{

	//printf("%d\n",123 / 10);
	printd(326);
	printf("\n");
	return 0;
}