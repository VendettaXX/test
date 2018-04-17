#include <string.h>
#include <stdio.h>
int main(void)
{
    char *a="hello";
    char *b="helloworld";
    printf("%d",strlen(a)-strlen(b));
    unsigned int c=5;
    unsigned int d=10;
    printf("%d",c-d);
    unsigned int e=c-d;
    printf("%d",e);


}
