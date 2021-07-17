#include <stdio.h>
#include <stdarg.h>

void miniprint(char *fmt, ...)
{
	va_list ap;
	//char *ap;
	char ch;
	//va_start(ap,fmt);
	for (va_start(ap,fmt);ap != NULL; va_arg(ap,int))
	{
		printf("%c",*ap);
	}
	
	/* for(;ch = va_arg(ap,int);)
	{
		printf("%d",ch);
	} */	
		//putchar(va_arg(ap,int));
		//putchar(va_arg(ap,int));
		//printf("%c\n",va_arg(ap,int));
		//printf("%c\n",va_arg(ap,int));
		//printf("=%d",va_arg(ap,int));
	va_end(ap);
}

int main(void)
{
	printf("%s\n","Start programm");
	miniprint("qaz",'Q','R','W');
	/* char *str = "Hello Yuriy";
	char mass[] = "DWnamic"; */
	//str = mass;
	//for(;*str != 0;str++)
	//{
	//	printf("%c",*str);
	//}
	//printf("=%c",*(++str));
	return 0;
}