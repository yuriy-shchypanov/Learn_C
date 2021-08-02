#include <stdio.h>
#include <stdlib.h>
#define eos '\0'

// возвращает длину строки
int length(const char *p_ch)
{
    int v = 0;
    for (; *p_ch != eos; p_ch++)
        v += sizeof(*p_ch);
    return v;
}

char *strcatNT(char *dest, const char *source)
{
    char *retval;
    int v = length(dest) + sizeof(char); // + length(source) + sizeof(char);

    retval = (char *)malloc(v);
    int i;
    for (i = 0; *dest != '\0'; dest++)
    {
        retval[i] = *dest;
        i++;
        //++retval;
    }
    //printf("sizeofarray=%d\n",sizeof(retval));
    retval[i] = '\0';

    return retval;
}

char *strcatNTP(char *dest, const char *source)
{
    char *retval;
    char *retval_save;
    int v = length(dest) + length(source) + sizeof(char);

    retval = (char *)malloc(v);
    retval_save = retval;
    int i;
    for (i = 0; *dest != '\0'; dest++)
    {
        retval[i] = *dest;
        i++;
    }

    for (; *source != '\0'; source++)
    {
        retval[i] = *source;
        i++;
    }
    retval[i] = '\0';
    //retval = retval_save;
    return retval;
}

char *strconcat(char *dest, const char *source)
{
    char *inner_copy(char *pdest, const char *psource)
    {
        char *pstr;
        pstr = pdest;
         for (; *psource != '\0'; psource++, pstr++)
        {
            *pstr = *psource;
            //pstr++;
        }
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
            retval = inner_copy(retval,dest);
            retval = inner_copy(retval, source);
            *retval = '\0';
            retval = retval_start;
        }
    }
    else retval = "";

    return retval;
}

int main(void)
{
    char *source = "";
    char *dest = "";
    char *res;
    //res = strcatNTP(source, dest);
    res = strconcat(source,dest);
    printf("=%s", res);
    printf("\nLength=%d",length(res));
    free(res);
    return 0;
}
