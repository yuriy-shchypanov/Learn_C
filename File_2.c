#include <stdio.h>

int main(void)
{
    FILE *fp;
    //int ch;
    char buf
    fp = fopen("enum.c", "r");

    while ((ch = gets(fp)) != EOF)
        printf("%s", ch);
    fclose(fp);
    return 0;
}