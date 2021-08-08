#include <stdio.h>

int sum_of(int x, int y)
{
    int retval = x + y; // automatic model memory
    return retval;
}

int main(void)

{
    printf("resilt=%d",sum_of(5,4));
}