#include <stdio.h>

int main()
{

    int var;
    int *p;
    var = 10;
    p = &var;
    printf("var : %d\n", var);
    *p = 12; // dereferencing
    printf("var : %d\n", var);
    printf("Address:%d\n", p);
    printf("Address:%d\n", *(p + 1));

    char *p0;
    p0 = (char *)p;

    void *p1;

    p1 = p;
    printf("address: %d\n", (p1 + 1));

    return 0;
};