#include <stdio.h>

int main(void)
{
    int mass[3] = {926,45,27};
    int * p;

    p = &mass[0];

    printf("%d",*(p));
    return 0;
}