#include <stdio.h>

int main()
{

    char str[] = "HELLO world!";
    char *ptr = str;

    printf("Haloowww:%c\n ", (ptr+1));

    return 0;
}