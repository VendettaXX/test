#include <stdio.h>
int fun1()
{
    printf("fun1\n");
}
int fun2()
{

    printf("fun2\n");
}
int fun3()
{

    printf("fun3\n");
}
int main(void)
{
    typedef int (*pfun)(void);
    pfun a[3]={fun1,fun2,fun3};
    a[0]();
    a[1]();
    a[2]();
    (*a)();
    (*(a+1))();
    (*(a+2))();
    int (*b)[10];
    //*b=a;
}
