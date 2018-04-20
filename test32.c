
#include"stdio.h"
#include"conio.h"
#include"setjmp.h"
jmp_buf Jump_Buffer;
#define try if(!setjmp(Jump_Buffer))
#define catch else
#define throw longjmp(Jump_Buffer,1)include <stdio.h>
#include <string.h>

char * _strcpy(char *a, const char *s)
{
        try
        {
                char *temp;
                if (NULL == a || NULL == s)
                        throw "Invalid argument(s)";   //这里抛出一个字符串异常(char*)类型的
                temp = a;
                while (*a++ = *s++)
                {
                }
                return temp;
        }
        catch (char * e)        //在这里接住这个char*类型的异常，e就是指向异常对象："Invalid argument(s)"
        {
                printf("%s", e);
        }
}

int main(int argc, char * argv[])
{
        char a[32];
        _strcpy(a, NULL);
        return 0;
}
