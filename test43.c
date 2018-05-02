#include <stdio.h>
int main(void)
{
    static int i =1;
    int *p= &i;
    *p=2;
    i=3;
}
