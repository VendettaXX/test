#include <stdio.h>
int main(void)
{
    const  int a=10;
    //int *b=&a;
    //*b=11;
    a=11;
    printf("%d",a);
}
