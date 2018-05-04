#include <stdio.h>
int main(void)
{
    int i=10;
    int * restrict p=&i;
    int *s=p;
    *s=1000;
}
