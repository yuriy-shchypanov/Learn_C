#include <stdio.h>
#include <string.h>

char *strcatNT(char *dest, const char *source)
{
    char *retval = dest;

    return retval;
}

int main(void)
{
    char str[6] = "YURIY";
    int status_system;
    status_system = system("cls");
    status_system = system("dir");
    char *p = str;
    printf("p=%s\n", p);
    *p = 'R';
    *(++p) = 'Z';
    printf("str=%s\n", str);
    
    char *str_literal = "BASIS";
 
    return 0;
}