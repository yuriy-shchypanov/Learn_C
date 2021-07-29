#include <stdio.h>

int main(void)
{
    FILE *pf;
    int ch;
    pf = fopen("enum.c", "r");

    fseek(pf, 1, SEEK_SET);
    if ((ch = getc(pf)) != EOF)
                printf("%c", ch);

    fclose(pf);

    return 0;
}