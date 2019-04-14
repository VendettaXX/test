#include <stdio.h>
#include <stdlib.h>
struct test{
    int a;
    int s[];
};
int main(void)
{
    struct test a;
    printf("%d\n",sizeof(a));
    struct test * b=(struct test *)malloc(sizeof(struct test)+100*sizeof(int));
    for(int i=0;i<100;i++)
    {
        b->s[i]=i;
    }
    for(int i=0;i<100;i++)
    {
        printf("%d\t",b->s[i]);
    }
    printf("%d\n",sizeof(b));
    free(b);
	getchar();
    return 0;
}
