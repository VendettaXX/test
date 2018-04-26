#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
    const restrict char *a=(char *)malloc(6);
    memset(a,0,6);
    char b=a;
    *b='t';
    printf ("123");
}
