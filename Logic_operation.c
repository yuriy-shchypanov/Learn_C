#include <stdio.h>
#include <locale.h>

int main(void)
{
    char *locale = setlocale(LC_ALL, "");

    int x = 0; 
    int y = 0;
    int result = (y||x);
    printf("%d\n",result);
    return 0;
}