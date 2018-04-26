#include <stdio.h>
#include <string.h>
int main(void)
{
     const char  a[]="hello";
    //const  char *a="hello";
    memset((const char *)a,0,6);
    printf("%s",a);
}
