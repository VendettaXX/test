#include <stdio.h>
int main(void)
{
    const char a[10]="hello";//栈区的东西可以被修改,但是不能被 const char* a 这个指针变量修改
    char  *b="hello";//常量区的东西无法被修改
    char  *c = b;
    char  *d = a;
    printf("%c",*(c+1));
    *(d+1)='a';
    b="stand";

    return 0;
}
