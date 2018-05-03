#include <stdio.h>
#include <string.h>
int eatspace(const char *str)
{
    char *p=str;
    char *s=p;
    while(*p!='\0')
    {
        if(*p!=' ')
        {
            *s++=*p++;
        }
        else{
            p++;
        }

    }
    *s='\0';
}

int main(void)
{
    char a[]="1 +2+3  +4+5";
    eatspace(a);
    printf("%s",a);

}
