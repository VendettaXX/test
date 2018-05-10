#include <stdio.h>
struct a{
    int a;
    char b[10];
};
int main(void)
{
    struct a* p=malloc(sizeof(struct a));
    p->a=1000;
    p->b[0]=1;
}
