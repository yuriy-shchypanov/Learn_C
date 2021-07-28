#include <stdio.h>
#include <stdlib.h>
#define eos '\0'

int length(const char *p_ch)
{
    int v = 0;
    for (; *p_ch != '\0'; p_ch++)
    {
        v += sizeof(*p_ch);
        //printf("%d=%c ", v, *p_ch);
    }
    return v;
}

char *strcatNT(char *dest, const char *source)
{
    char *retval;
    int v = length(dest) + sizeof(char); // + length(source) + sizeof(char);

    retval = malloc(v);
    /* for (int i = 0; i<v; i++)
        retval[i] = dest[i]; */
    while (*(dest++) != '\0')
    {
        //*retval = *dest;
        //dest += 1;
        printf("%c", *dest);
        //dest++;
        //retval += 1;
    }
    retval += 1;
    *retval = '\0';
    return retval;
}

int main(void)
{
    char *source = "Yuriy";
    char *dest = "Shchypanov";
    char *res;

    //res = strcatNT(dest,source);
    //printf("%s\n", res);
    int x = length(dest);
    printf("\nx=%d", x);
    return 0;
}
