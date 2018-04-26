#include <stdio.h>
#include <string.h>
int main(void)
{
    char *a="hello";
    memset((char *)a,0,6);
    printf("hello");
    int c=10;
    return 0;
}
