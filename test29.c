#include <stdio.h>
int main(void)
{
    int a=1;
    printf("%d,%d,a=%d\n",(a*=2),(a+=3),a);
    return 0;
}
