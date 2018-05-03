#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *str;
    str=itoa(1234,str,16);
    printf("%s",str);
}
