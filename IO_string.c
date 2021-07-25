#include <stdio.h>

int main(void)
{
    FILE *fp;
    char *str;
   
    fp = fopen("enum_copy.c", "r");
    while ((str = (fgets(str, 60, fp))) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}