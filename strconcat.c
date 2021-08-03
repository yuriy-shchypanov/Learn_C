#include <stdio.h>
#include <stdlib.h>

#define eos '\0'
#define emptystr ""

// возвращает длину строки
int length(const char *p_ch)
{
    int v = 0;
    for (; *p_ch != eos; p_ch++)
        v += sizeof(*p_ch);
    return v;
}

char *strconcat(char *dest, const char *source)
{
    char *inner_copy(char *pdest, const char *psource)
    {
        char *pstr;
        pstr = pdest;
        for (; *psource != eos; psource++, pstr++)
            *pstr = *psource;
        return pstr;
    }

    char *retval = NULL;
    char *retval_start;
    int v = length(dest) + length(source);
    if (v > 0)
    {
        retval = (char *)malloc(v + sizeof(char));
        if (!(retval))
            printf("Error memory allocation");
        else
        {
            retval_start = retval;
            retval = inner_copy(retval, dest);
            retval = inner_copy(retval, source);
            *retval = eos;
            retval = retval_start;
        }
    }
    else
        retval = emptystr;

    return retval;
}

int main(void)
{
    char *source = "Yuriy ";
    char *dest = "Shchypanov";
    char *res;
    res = strconcat(source, dest);
    printf("=%s", res);
    //printf("\nLength=%d", length(res)); branch hotfix
    free(res);
    return 0;
}