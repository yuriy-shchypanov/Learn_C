#include <stdio.h>

int main(void)
{
    struct person {
        char pname[6];
        
        int age;
    };

    struct person p = {"Wuriy", 58};
    char *ch;
    
    struct person *ptr_person;
    ptr_person = &p;
    ch =(char *) ptr_person;
        
    printf("%c",*ch);
    return 0;
}