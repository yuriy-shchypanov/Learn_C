#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *finput;
    FILE *foutput;
    int c;

    // копирование файла finput => foutput
    finput = fopen("enum.c", "r");
    foutput = fopen("enum_copy", "w");

    while ((c = getc(finput)) != EOF)
    {
        putc(c, foutput);
    }

    fclose(finput);
    fclose(foutput);
    return 0;
}