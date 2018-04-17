#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a=0;
char *p1;
char *p1=NULL;
int main(void)
{
    int b;
    char s[]="abc";//abc在栈区,s也在栈区
    char *p2;//栈区
    char *p3="1234567";// 1234567\0存储在常量区,p3存储在栈区
    static  int c=0; //全局(静态)初始化区
    static int d;
    p1=(char*)malloc(10);//由程序员手动分配来的空间都在堆区
    p2=(char*)malloc(20);
    strcpy(p1,"1234567");//1234567\0在常量区,编译器可能会将他与p3指向的"123456"优化成一个地方
}
