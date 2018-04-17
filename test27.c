#include <stdio.h>
#include <string.h>
char * stringcopy(char * dest,char * src);
int main(void)
{
    char a[20]="helloworld";
    printf("%s",(stringcopy(a,"hello")));
}
char * stringcopy(char *dest,char * src)
{
    int a=strlen(dest);
    printf("%d",a);
    int b=strlen(src);
    printf("%d",b);
    if (a<b)
    {
        printf("被复制对象长度小于复制对象");
        return "error";
    }
    else{
        for(int i=0;i<=b;i++)
        {
            char *t1=dest;
            char *t2=src;
            (*t1++)=(*t2++);
        }
    }
    return dest;
}
